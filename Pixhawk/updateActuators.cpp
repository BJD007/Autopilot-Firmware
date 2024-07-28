void updateActuators()
{
    // Publish actuator controls
    struct actuator_controls_s actuators;
    memset(&actuators, 0, sizeof(actuators));
    
    actuators.control[0] = roll_output;
    actuators.control[1] = pitch_output;
    actuators.control[2] = yaw_output;
    actuators.control[3] = throttle_output;
    
    int actuator_pub_fd = orb_advertise(ORB_ID(actuator_controls_0), &actuators);
    orb_publish(ORB_ID(actuator_controls_0), actuator_pub_fd, &actuators);
}
