// this caused the proper behavior for negative pitch, but on positive pitch it accelerates excessively
d->desired_current = SIGN(d->pitch_angle) * (d->pitch_angle / 10) * d->float_conf.booster_current;
d->setpoint += d->desired_current;
// Do PID maths
d->proportional = d->setpoint - d->pitch_angle;

// this caused the board to act normal


if (d->pitch_angle > 0) {
    d->desired_current = -fabsf(d->pitch_angle / 10) * d->float_conf.booster_current;
} else {
    d->desired_current = fabsf(d->pitch_angle / 10) * d->float_conf.booster_current;
}

d->setpoint += d->desired_current;

// Do PID maths
d->proportional = d->setpoint - d->pitch_angle;

// 
// 
// this caused it to shoot forward whether it was positive or negative pitch


d->desired_current = SIGN(d->pitch_angle) * (d->pitch_angle / 10) * d->float_conf.booster_current;
d->setpoint += d->desired_current;
if (d->pitch_angle > 0) {
    d->proportional = d->setpoint + d->pitch_angle;
} else {
    d->proportional = d->setpoint - d->pitch_angle;
}