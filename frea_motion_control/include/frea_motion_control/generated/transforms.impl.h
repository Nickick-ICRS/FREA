
// Constructors
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::MotionTransforms
    ()
     :
    fr_chassis_link_X_fr_world(),
    fr_world_X_fr_chassis_link(),
    fr_left_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_left_wheel_link(),
    fr_right_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_right_wheel_link(),
    fr_lower_neck_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_lower_neck_link(),
    fr_upper_neck_link_X_fr_lower_neck_link(),
    fr_lower_neck_link_X_fr_upper_neck_link(),
    fr_head_link_X_fr_upper_neck_link(),
    fr_upper_neck_link_X_fr_head_link(),
    fr_mouth_link_X_fr_head_link(),
    fr_head_link_X_fr_mouth_link(),
    fr_left_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_left_ear_link(),
    fr_right_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_right_ear_link(),
    fr_upper_tail_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_upper_tail_link(),
    fr_lower_tail_link_X_fr_upper_tail_link(),
    fr_upper_tail_link_X_fr_lower_tail_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::frea::tpl::MotionTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::ForceTransforms
    ()
     :
    fr_chassis_link_X_fr_world(),
    fr_world_X_fr_chassis_link(),
    fr_left_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_left_wheel_link(),
    fr_right_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_right_wheel_link(),
    fr_lower_neck_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_lower_neck_link(),
    fr_upper_neck_link_X_fr_lower_neck_link(),
    fr_lower_neck_link_X_fr_upper_neck_link(),
    fr_head_link_X_fr_upper_neck_link(),
    fr_upper_neck_link_X_fr_head_link(),
    fr_mouth_link_X_fr_head_link(),
    fr_head_link_X_fr_mouth_link(),
    fr_left_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_left_ear_link(),
    fr_right_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_right_ear_link(),
    fr_upper_tail_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_upper_tail_link(),
    fr_lower_tail_link_X_fr_upper_tail_link(),
    fr_upper_tail_link_X_fr_lower_tail_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::frea::tpl::ForceTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::HomogeneousTransforms
    ()
     :
    fr_chassis_link_X_fr_world(),
    fr_world_X_fr_chassis_link(),
    fr_left_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_left_wheel_link(),
    fr_right_wheel_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_right_wheel_link(),
    fr_lower_neck_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_lower_neck_link(),
    fr_upper_neck_link_X_fr_lower_neck_link(),
    fr_lower_neck_link_X_fr_upper_neck_link(),
    fr_head_link_X_fr_upper_neck_link(),
    fr_upper_neck_link_X_fr_head_link(),
    fr_mouth_link_X_fr_head_link(),
    fr_head_link_X_fr_mouth_link(),
    fr_left_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_left_ear_link(),
    fr_right_ear_link_X_fr_head_link(),
    fr_head_link_X_fr_right_ear_link(),
    fr_upper_tail_link_X_fr_chassis_link(),
    fr_chassis_link_X_fr_upper_tail_link(),
    fr_lower_tail_link_X_fr_upper_tail_link(),
    fr_upper_tail_link_X_fr_lower_tail_link()
{
    updateParameters();
}
template <typename TRAIT>
void iit::frea::tpl::HomogeneousTransforms<TRAIT>::updateParameters() {
}

template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::Type_fr_chassis_link_X_fr_world()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,2) = - s_q_chassis_joint_;
    (*this)(1,0) = - s_q_chassis_joint_;
    (*this)(1,2) = - c_q_chassis_joint_;
    (*this)(3,3) =  c_q_chassis_joint_;
    (*this)(3,5) = - s_q_chassis_joint_;
    (*this)(4,3) = - s_q_chassis_joint_;
    (*this)(4,5) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::Type_fr_world_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,1) = - s_q_chassis_joint_;
    (*this)(2,0) = - s_q_chassis_joint_;
    (*this)(2,1) = - c_q_chassis_joint_;
    (*this)(3,3) =  c_q_chassis_joint_;
    (*this)(3,4) = - s_q_chassis_joint_;
    (*this)(5,3) = - s_q_chassis_joint_;
    (*this)(5,4) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::Type_fr_left_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) =  s_q_left_wheel_joint_;
    (*this)(1,0) = - s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    (*this)(3,0) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(3,1) = ( 0.198 *  c_q_left_wheel_joint_);
    (*this)(3,3) =  c_q_left_wheel_joint_;
    (*this)(3,4) =  s_q_left_wheel_joint_;
    (*this)(4,0) = (- 0.198 *  c_q_left_wheel_joint_);
    (*this)(4,1) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(4,3) = - s_q_left_wheel_joint_;
    (*this)(4,4) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::Type_fr_chassis_link_X_fr_left_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) = - s_q_left_wheel_joint_;
    (*this)(1,0) =  s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    (*this)(3,0) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(3,1) = (- 0.198 *  c_q_left_wheel_joint_);
    (*this)(3,3) =  c_q_left_wheel_joint_;
    (*this)(3,4) = - s_q_left_wheel_joint_;
    (*this)(4,0) = ( 0.198 *  c_q_left_wheel_joint_);
    (*this)(4,1) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(4,3) =  s_q_left_wheel_joint_;
    (*this)(4,4) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::Type_fr_right_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = - 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    (*this)(3,0) = (- 0.198 *  s_q_right_wheel_joint_);
    (*this)(3,1) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(3,3) =  c_q_right_wheel_joint_;
    (*this)(3,4) = - s_q_right_wheel_joint_;
    (*this)(4,0) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(4,1) = ( 0.198 *  s_q_right_wheel_joint_);
    (*this)(4,3) = - s_q_right_wheel_joint_;
    (*this)(4,4) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::Type_fr_chassis_link_X_fr_right_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = - 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    (*this)(3,0) = (- 0.198 *  s_q_right_wheel_joint_);
    (*this)(3,1) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(3,3) =  c_q_right_wheel_joint_;
    (*this)(3,4) = - s_q_right_wheel_joint_;
    (*this)(4,0) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(4,1) = ( 0.198 *  s_q_right_wheel_joint_);
    (*this)(4,3) = - s_q_right_wheel_joint_;
    (*this)(4,4) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::Type_fr_lower_neck_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,5) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = - 0.23819;
    (*this)(5,1) = 0.13744;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) =  s_q_lower_neck_joint_;
    (*this)(1,0) = - s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    (*this)(3,0) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(3,1) = (- 0.063 *  c_q_lower_neck_joint_);
    (*this)(3,2) = (( 0.23819 *  c_q_lower_neck_joint_) - ( 0.13744 *  s_q_lower_neck_joint_));
    (*this)(3,3) =  c_q_lower_neck_joint_;
    (*this)(3,4) =  s_q_lower_neck_joint_;
    (*this)(4,0) = ( 0.063 *  c_q_lower_neck_joint_);
    (*this)(4,1) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(4,2) = ((- 0.23819 *  s_q_lower_neck_joint_) - ( 0.13744 *  c_q_lower_neck_joint_));
    (*this)(4,3) = - s_q_lower_neck_joint_;
    (*this)(4,4) =  c_q_lower_neck_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::Type_fr_chassis_link_X_fr_lower_neck_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = - 0.23819;
    (*this)(3,5) = 0;
    (*this)(4,2) = 0.13744;
    (*this)(4,5) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) = - s_q_lower_neck_joint_;
    (*this)(1,0) =  s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    (*this)(3,0) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(3,1) = ( 0.063 *  c_q_lower_neck_joint_);
    (*this)(3,3) =  c_q_lower_neck_joint_;
    (*this)(3,4) = - s_q_lower_neck_joint_;
    (*this)(4,0) = (- 0.063 *  c_q_lower_neck_joint_);
    (*this)(4,1) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(4,3) =  s_q_lower_neck_joint_;
    (*this)(4,4) =  c_q_lower_neck_joint_;
    (*this)(5,0) = (( 0.23819 *  c_q_lower_neck_joint_) - ( 0.13744 *  s_q_lower_neck_joint_));
    (*this)(5,1) = ((- 0.23819 *  s_q_lower_neck_joint_) - ( 0.13744 *  c_q_lower_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::Type_fr_upper_neck_link_X_fr_lower_neck_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 7.99999E-4;
    (*this)(2,1) = - 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = 0.112686;
    (*this)(5,1) = 0.194749;
    (*this)(5,2) = - 3.5942E-4;
    (*this)(5,3) = - 7.99999E-4;
    (*this)(5,4) = - 0.00138265;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(0,2) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(1,2) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    (*this)(3,0) = (( 0.0628441 *  s_q_upper_neck_joint_) + ( 1.40424E-4 *  c_q_upper_neck_joint_));
    (*this)(3,1) = (( 0.0631555 *  c_q_upper_neck_joint_) - ( 3.19865E-4 *  s_q_upper_neck_joint_));
    (*this)(3,2) = (( 0.112443 *  c_q_upper_neck_joint_) - ( 0.194889 *  s_q_upper_neck_joint_));
    (*this)(3,3) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(3,5) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(4,0) = (( 0.0628441 *  c_q_upper_neck_joint_) - ( 1.40424E-4 *  s_q_upper_neck_joint_));
    (*this)(4,1) = ((- 0.0631555 *  s_q_upper_neck_joint_) - ( 3.19865E-4 *  c_q_upper_neck_joint_));
    (*this)(4,2) = ((- 0.112443 *  s_q_upper_neck_joint_) - ( 0.194889 *  c_q_upper_neck_joint_));
    (*this)(4,3) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(4,4) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(4,5) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::Type_fr_lower_neck_link_X_fr_upper_neck_link()
{
    (*this)(0,2) = - 7.99999E-4;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = - 0.00138265;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0.112686;
    (*this)(3,5) = - 7.99999E-4;
    (*this)(4,2) = 0.194749;
    (*this)(4,5) = - 0.00138265;
    (*this)(5,2) = - 3.5942E-4;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(2,0) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(2,1) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    (*this)(3,0) = (( 0.0628441 *  s_q_upper_neck_joint_) + ( 1.40424E-4 *  c_q_upper_neck_joint_));
    (*this)(3,1) = (( 0.0628441 *  c_q_upper_neck_joint_) - ( 1.40424E-4 *  s_q_upper_neck_joint_));
    (*this)(3,3) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(3,4) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(4,0) = (( 0.0631555 *  c_q_upper_neck_joint_) - ( 3.19865E-4 *  s_q_upper_neck_joint_));
    (*this)(4,1) = ((- 0.0631555 *  s_q_upper_neck_joint_) - ( 3.19865E-4 *  c_q_upper_neck_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(4,4) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(5,0) = (( 0.112443 *  c_q_upper_neck_joint_) - ( 0.194889 *  s_q_upper_neck_joint_));
    (*this)(5,1) = ((- 0.112443 *  s_q_upper_neck_joint_) - ( 0.194889 *  c_q_upper_neck_joint_));
    (*this)(5,3) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(5,4) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::Type_fr_head_link_X_fr_upper_neck_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0.866556;
    (*this)(2,1) = 0.499079;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = 4.97096E-7;
    (*this)(5,1) = - 8.61512E-7;
    (*this)(5,2) = - 2.53052E-4;
    (*this)(5,3) = 0.866556;
    (*this)(5,4) = 0.499079;
    (*this)(5,5) = 3.15757E-6;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(0,2) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(1,0) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(1,2) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    (*this)(3,0) = ((- 0.157429 *  s_q_head_joint_) - ( 2.51176E-4 *  c_q_head_joint_));
    (*this)(3,1) = (( 0.272839 *  s_q_head_joint_) + ( 4.35311E-4 *  c_q_head_joint_));
    (*this)(3,2) = (( 5.02578E-4 *  s_q_head_joint_) - ( 0.315 *  c_q_head_joint_));
    (*this)(3,3) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(3,4) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(3,5) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(4,0) = (( 2.51176E-4 *  s_q_head_joint_) - ( 0.157429 *  c_q_head_joint_));
    (*this)(4,1) = (( 0.272839 *  c_q_head_joint_) - ( 4.35311E-4 *  s_q_head_joint_));
    (*this)(4,2) = (( 0.315 *  s_q_head_joint_) + ( 5.02578E-4 *  c_q_head_joint_));
    (*this)(4,3) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(4,4) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(4,5) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::Type_fr_upper_neck_link_X_fr_head_link()
{
    (*this)(0,2) = 0.866556;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0.499079;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 4.97096E-7;
    (*this)(3,5) = 0.866556;
    (*this)(4,2) = - 8.61512E-7;
    (*this)(4,5) = 0.499079;
    (*this)(5,2) = - 2.53052E-4;
    (*this)(5,5) = 3.15757E-6;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(1,0) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(2,0) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(2,1) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    (*this)(3,0) = ((- 0.157429 *  s_q_head_joint_) - ( 2.51176E-4 *  c_q_head_joint_));
    (*this)(3,1) = (( 2.51176E-4 *  s_q_head_joint_) - ( 0.157429 *  c_q_head_joint_));
    (*this)(3,3) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(3,4) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(4,0) = (( 0.272839 *  s_q_head_joint_) + ( 4.35311E-4 *  c_q_head_joint_));
    (*this)(4,1) = (( 0.272839 *  c_q_head_joint_) - ( 4.35311E-4 *  s_q_head_joint_));
    (*this)(4,3) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(4,4) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(5,0) = (( 5.02578E-4 *  s_q_head_joint_) - ( 0.315 *  c_q_head_joint_));
    (*this)(5,1) = (( 0.315 *  s_q_head_joint_) + ( 5.02578E-4 *  c_q_head_joint_));
    (*this)(5,3) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(5,4) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::Type_fr_mouth_link_X_fr_head_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 0.00318999;
    (*this)(2,1) = - 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = 0.0264998;
    (*this)(5,1) = - 8.45348E-5;
    (*this)(5,2) = - 0.0230001;
    (*this)(5,3) = - 0.00318999;
    (*this)(5,4) = - 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(0,2) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(1,0) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(1,2) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    (*this)(3,0) = ((- 1.08175E-4 *  s_q_mouth_joint_) - ( 1.85547E-5 *  c_q_mouth_joint_));
    (*this)(3,1) = ((- 0.0344371 *  s_q_mouth_joint_) - ( 0.00673245 *  c_q_mouth_joint_));
    (*this)(3,2) = (( 2.92182E-6 *  s_q_mouth_joint_) - ( 1.6797E-6 *  c_q_mouth_joint_));
    (*this)(3,3) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(3,4) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(3,5) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(4,0) = (( 1.85547E-5 *  s_q_mouth_joint_) - ( 1.08175E-4 *  c_q_mouth_joint_));
    (*this)(4,1) = (( 0.00673245 *  s_q_mouth_joint_) - ( 0.0344371 *  c_q_mouth_joint_));
    (*this)(4,2) = (( 1.6797E-6 *  s_q_mouth_joint_) + ( 2.92182E-6 *  c_q_mouth_joint_));
    (*this)(4,3) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(4,4) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(4,5) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::Type_fr_head_link_X_fr_mouth_link()
{
    (*this)(0,2) = - 0.00318999;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = - 0.999994;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0.0264998;
    (*this)(3,5) = - 0.00318999;
    (*this)(4,2) = - 8.45348E-5;
    (*this)(4,5) = - 0.999994;
    (*this)(5,2) = - 0.0230001;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(1,0) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(2,0) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(2,1) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    (*this)(3,0) = ((- 1.08175E-4 *  s_q_mouth_joint_) - ( 1.85547E-5 *  c_q_mouth_joint_));
    (*this)(3,1) = (( 1.85547E-5 *  s_q_mouth_joint_) - ( 1.08175E-4 *  c_q_mouth_joint_));
    (*this)(3,3) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(3,4) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(4,0) = ((- 0.0344371 *  s_q_mouth_joint_) - ( 0.00673245 *  c_q_mouth_joint_));
    (*this)(4,1) = (( 0.00673245 *  s_q_mouth_joint_) - ( 0.0344371 *  c_q_mouth_joint_));
    (*this)(4,3) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(4,4) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(5,0) = (( 2.92182E-6 *  s_q_mouth_joint_) - ( 1.6797E-6 *  c_q_mouth_joint_));
    (*this)(5,1) = (( 1.6797E-6 *  s_q_mouth_joint_) + ( 2.92182E-6 *  c_q_mouth_joint_));
    (*this)(5,3) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(5,4) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::Type_fr_left_ear_link_X_fr_head_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = - 0.00499997;
    (*this)(5,1) = 1.59499E-5;
    (*this)(5,2) = 0.00200224;
    (*this)(5,3) = 0.00318999;
    (*this)(5,4) = 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    (*this)(3,0) = (( 0.0536517 *  c_q_left_ear_joint_) - ( 0.0310524 *  s_q_left_ear_joint_));
    (*this)(3,1) = (( 0.00542931 *  s_q_left_ear_joint_) + ( 6.01939E-4 *  c_q_left_ear_joint_));
    (*this)(3,2) = ((- 0.0536495 *  s_q_left_ear_joint_) - ( 0.0310696 *  c_q_left_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(3,4) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(3,5) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(4,0) = ((- 0.0536517 *  s_q_left_ear_joint_) - ( 0.0310524 *  c_q_left_ear_joint_));
    (*this)(4,1) = (( 0.00542931 *  c_q_left_ear_joint_) - ( 6.01939E-4 *  s_q_left_ear_joint_));
    (*this)(4,2) = (( 0.0310696 *  s_q_left_ear_joint_) - ( 0.0536495 *  c_q_left_ear_joint_));
    (*this)(4,3) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(4,5) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::Type_fr_head_link_X_fr_left_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0.999994;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = - 0.00499997;
    (*this)(3,5) = 0.00318999;
    (*this)(4,2) = 1.59499E-5;
    (*this)(4,5) = 0.999994;
    (*this)(5,2) = 0.00200224;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    (*this)(3,0) = (( 0.0536517 *  c_q_left_ear_joint_) - ( 0.0310524 *  s_q_left_ear_joint_));
    (*this)(3,1) = ((- 0.0536517 *  s_q_left_ear_joint_) - ( 0.0310524 *  c_q_left_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(3,4) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(4,0) = (( 0.00542931 *  s_q_left_ear_joint_) + ( 6.01939E-4 *  c_q_left_ear_joint_));
    (*this)(4,1) = (( 0.00542931 *  c_q_left_ear_joint_) - ( 6.01939E-4 *  s_q_left_ear_joint_));
    (*this)(4,3) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(5,0) = ((- 0.0536495 *  s_q_left_ear_joint_) - ( 0.0310696 *  c_q_left_ear_joint_));
    (*this)(5,1) = (( 0.0310696 *  s_q_left_ear_joint_) - ( 0.0536495 *  c_q_left_ear_joint_));
    (*this)(5,3) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(5,4) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::Type_fr_right_ear_link_X_fr_head_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = - 0.00499997;
    (*this)(5,1) = 1.59499E-5;
    (*this)(5,2) = 0.0019978;
    (*this)(5,3) = 0.00318999;
    (*this)(5,4) = 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    (*this)(3,0) = (( 0.03109 *  s_q_right_ear_joint_) - ( 0.053653 *  c_q_right_ear_joint_));
    (*this)(3,1) = (( 0.00522885 *  s_q_right_ear_joint_) + ( 9.48083E-4 *  c_q_right_ear_joint_));
    (*this)(3,2) = (( 0.0536557 *  s_q_right_ear_joint_) + ( 0.0310732 *  c_q_right_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(3,4) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(3,5) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(4,0) = (( 0.053653 *  s_q_right_ear_joint_) + ( 0.03109 *  c_q_right_ear_joint_));
    (*this)(4,1) = (( 0.00522885 *  c_q_right_ear_joint_) - ( 9.48083E-4 *  s_q_right_ear_joint_));
    (*this)(4,2) = (( 0.0536557 *  c_q_right_ear_joint_) - ( 0.0310732 *  s_q_right_ear_joint_));
    (*this)(4,3) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(4,5) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::Type_fr_head_link_X_fr_right_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0.999994;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = - 0.00499997;
    (*this)(3,5) = 0.00318999;
    (*this)(4,2) = 1.59499E-5;
    (*this)(4,5) = 0.999994;
    (*this)(5,2) = 0.0019978;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    (*this)(3,0) = (( 0.03109 *  s_q_right_ear_joint_) - ( 0.053653 *  c_q_right_ear_joint_));
    (*this)(3,1) = (( 0.053653 *  s_q_right_ear_joint_) + ( 0.03109 *  c_q_right_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(3,4) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(4,0) = (( 0.00522885 *  s_q_right_ear_joint_) + ( 9.48083E-4 *  c_q_right_ear_joint_));
    (*this)(4,1) = (( 0.00522885 *  c_q_right_ear_joint_) - ( 9.48083E-4 *  s_q_right_ear_joint_));
    (*this)(4,3) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(5,0) = (( 0.0536557 *  s_q_right_ear_joint_) + ( 0.0310732 *  c_q_right_ear_joint_));
    (*this)(5,1) = (( 0.0536557 *  c_q_right_ear_joint_) - ( 0.0310732 *  s_q_right_ear_joint_));
    (*this)(5,3) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(5,4) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::Type_fr_upper_tail_link_X_fr_chassis_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 0.00137999;
    (*this)(2,1) = 7.92652E-4;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = 0.238139;
    (*this)(5,1) = - 0.137526;
    (*this)(5,2) = - 4.37644E-4;
    (*this)(5,3) = - 0.00137999;
    (*this)(5,4) = 7.92652E-4;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(0,2) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(1,2) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    (*this)(3,0) = (( 0.0631882 *  s_q_upper_tail_joint_) + ( 4.15833E-4 *  c_q_upper_tail_joint_));
    (*this)(3,1) = (( 0.06281 *  c_q_upper_tail_joint_) - ( 1.9562E-4 *  s_q_upper_tail_joint_));
    (*this)(3,2) = (( 0.137111 *  s_q_upper_tail_joint_) + ( 0.238379 *  c_q_upper_tail_joint_));
    (*this)(3,3) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(3,5) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(4,0) = (( 0.0631882 *  c_q_upper_tail_joint_) - ( 4.15833E-4 *  s_q_upper_tail_joint_));
    (*this)(4,1) = ((- 0.06281 *  s_q_upper_tail_joint_) - ( 1.9562E-4 *  c_q_upper_tail_joint_));
    (*this)(4,2) = (( 0.137111 *  c_q_upper_tail_joint_) - ( 0.238379 *  s_q_upper_tail_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(4,4) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(4,5) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::Type_fr_chassis_link_X_fr_upper_tail_link()
{
    (*this)(0,2) = - 0.00137999;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 7.92652E-4;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0.238139;
    (*this)(3,5) = - 0.00137999;
    (*this)(4,2) = - 0.137526;
    (*this)(4,5) = 7.92652E-4;
    (*this)(5,2) = - 4.37644E-4;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(2,0) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(2,1) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    (*this)(3,0) = (( 0.0631882 *  s_q_upper_tail_joint_) + ( 4.15833E-4 *  c_q_upper_tail_joint_));
    (*this)(3,1) = (( 0.0631882 *  c_q_upper_tail_joint_) - ( 4.15833E-4 *  s_q_upper_tail_joint_));
    (*this)(3,3) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(4,0) = (( 0.06281 *  c_q_upper_tail_joint_) - ( 1.9562E-4 *  s_q_upper_tail_joint_));
    (*this)(4,1) = ((- 0.06281 *  s_q_upper_tail_joint_) - ( 1.9562E-4 *  c_q_upper_tail_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(4,4) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(5,0) = (( 0.137111 *  s_q_upper_tail_joint_) + ( 0.238379 *  c_q_upper_tail_joint_));
    (*this)(5,1) = (( 0.137111 *  c_q_upper_tail_joint_) - ( 0.238379 *  s_q_upper_tail_joint_));
    (*this)(5,3) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(5,4) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::Type_fr_lower_tail_link_X_fr_upper_tail_link()
{
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = - 7.89999E-4;
    (*this)(2,1) = 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(5,0) = 0.111932;
    (*this)(5,1) = - 0.195179;
    (*this)(5,2) = - 3.58292E-4;
    (*this)(5,3) = - 7.89999E-4;
    (*this)(5,4) = 0.00138265;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(0,2) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(1,2) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    (*this)(3,0) = (( 0.0631545 *  s_q_lower_tail_joint_) + ( 2.12841E-4 *  c_q_lower_tail_joint_));
    (*this)(3,1) = (( 0.0628451 *  c_q_lower_tail_joint_) - ( 3.93602E-4 *  s_q_lower_tail_joint_));
    (*this)(3,2) = (( 0.194908 *  s_q_lower_tail_joint_) + ( 0.112403 *  c_q_lower_tail_joint_));
    (*this)(3,3) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(3,4) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(3,5) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(4,0) = (( 0.0631545 *  c_q_lower_tail_joint_) - ( 2.12841E-4 *  s_q_lower_tail_joint_));
    (*this)(4,1) = ((- 0.0628451 *  s_q_lower_tail_joint_) - ( 3.93602E-4 *  c_q_lower_tail_joint_));
    (*this)(4,2) = (( 0.194908 *  c_q_lower_tail_joint_) - ( 0.112403 *  s_q_lower_tail_joint_));
    (*this)(4,3) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(4,4) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(4,5) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::Type_fr_upper_tail_link_X_fr_lower_tail_link()
{
    (*this)(0,2) = - 7.89999E-4;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0.00138265;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,2) = 0.111932;
    (*this)(3,5) = - 7.89999E-4;
    (*this)(4,2) = - 0.195179;
    (*this)(4,5) = 0.00138265;
    (*this)(5,2) = - 3.58292E-4;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link& iit::frea::tpl::MotionTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(2,0) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(2,1) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    (*this)(3,0) = (( 0.0631545 *  s_q_lower_tail_joint_) + ( 2.12841E-4 *  c_q_lower_tail_joint_));
    (*this)(3,1) = (( 0.0631545 *  c_q_lower_tail_joint_) - ( 2.12841E-4 *  s_q_lower_tail_joint_));
    (*this)(3,3) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(3,4) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(4,0) = (( 0.0628451 *  c_q_lower_tail_joint_) - ( 3.93602E-4 *  s_q_lower_tail_joint_));
    (*this)(4,1) = ((- 0.0628451 *  s_q_lower_tail_joint_) - ( 3.93602E-4 *  c_q_lower_tail_joint_));
    (*this)(4,3) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(4,4) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(5,0) = (( 0.194908 *  s_q_lower_tail_joint_) + ( 0.112403 *  c_q_lower_tail_joint_));
    (*this)(5,1) = (( 0.194908 *  c_q_lower_tail_joint_) - ( 0.112403 *  s_q_lower_tail_joint_));
    (*this)(5,3) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(5,4) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    return *this;
}

template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::Type_fr_chassis_link_X_fr_world()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,4) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,4) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 1;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,2) = - s_q_chassis_joint_;
    (*this)(1,0) = - s_q_chassis_joint_;
    (*this)(1,2) = - c_q_chassis_joint_;
    (*this)(3,3) =  c_q_chassis_joint_;
    (*this)(3,5) = - s_q_chassis_joint_;
    (*this)(4,3) = - s_q_chassis_joint_;
    (*this)(4,5) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::Type_fr_world_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(0,4) = 0;
    (*this)(0,5) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(1,4) = 0;
    (*this)(1,5) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,3) = 0;
    (*this)(4,4) = 0;
    (*this)(4,5) = 1;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,1) = - s_q_chassis_joint_;
    (*this)(2,0) = - s_q_chassis_joint_;
    (*this)(2,1) = - c_q_chassis_joint_;
    (*this)(3,3) =  c_q_chassis_joint_;
    (*this)(3,4) = - s_q_chassis_joint_;
    (*this)(5,3) = - s_q_chassis_joint_;
    (*this)(5,4) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::Type_fr_left_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) =  s_q_left_wheel_joint_;
    (*this)(0,3) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(0,4) = ( 0.198 *  c_q_left_wheel_joint_);
    (*this)(1,0) = - s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    (*this)(1,3) = (- 0.198 *  c_q_left_wheel_joint_);
    (*this)(1,4) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(3,3) =  c_q_left_wheel_joint_;
    (*this)(3,4) =  s_q_left_wheel_joint_;
    (*this)(4,3) = - s_q_left_wheel_joint_;
    (*this)(4,4) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::Type_fr_chassis_link_X_fr_left_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) = - s_q_left_wheel_joint_;
    (*this)(0,3) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(0,4) = (- 0.198 *  c_q_left_wheel_joint_);
    (*this)(1,0) =  s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    (*this)(1,3) = ( 0.198 *  c_q_left_wheel_joint_);
    (*this)(1,4) = (- 0.198 *  s_q_left_wheel_joint_);
    (*this)(3,3) =  c_q_left_wheel_joint_;
    (*this)(3,4) = - s_q_left_wheel_joint_;
    (*this)(4,3) =  s_q_left_wheel_joint_;
    (*this)(4,4) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::Type_fr_right_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = - 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(0,3) = (- 0.198 *  s_q_right_wheel_joint_);
    (*this)(0,4) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    (*this)(1,3) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(1,4) = ( 0.198 *  s_q_right_wheel_joint_);
    (*this)(3,3) =  c_q_right_wheel_joint_;
    (*this)(3,4) = - s_q_right_wheel_joint_;
    (*this)(4,3) = - s_q_right_wheel_joint_;
    (*this)(4,4) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::Type_fr_chassis_link_X_fr_right_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = 0;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1;
    (*this)(2,3) = 0;
    (*this)(2,4) = 0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = - 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(0,3) = (- 0.198 *  s_q_right_wheel_joint_);
    (*this)(0,4) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    (*this)(1,3) = (- 0.198 *  c_q_right_wheel_joint_);
    (*this)(1,4) = ( 0.198 *  s_q_right_wheel_joint_);
    (*this)(3,3) =  c_q_right_wheel_joint_;
    (*this)(3,4) = - s_q_right_wheel_joint_;
    (*this)(4,3) = - s_q_right_wheel_joint_;
    (*this)(4,4) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::Type_fr_lower_neck_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.23819;
    (*this)(2,4) = 0.13744;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) =  s_q_lower_neck_joint_;
    (*this)(0,3) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(0,4) = (- 0.063 *  c_q_lower_neck_joint_);
    (*this)(0,5) = (( 0.23819 *  c_q_lower_neck_joint_) - ( 0.13744 *  s_q_lower_neck_joint_));
    (*this)(1,0) = - s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    (*this)(1,3) = ( 0.063 *  c_q_lower_neck_joint_);
    (*this)(1,4) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(1,5) = ((- 0.23819 *  s_q_lower_neck_joint_) - ( 0.13744 *  c_q_lower_neck_joint_));
    (*this)(3,3) =  c_q_lower_neck_joint_;
    (*this)(3,4) =  s_q_lower_neck_joint_;
    (*this)(4,3) = - s_q_lower_neck_joint_;
    (*this)(4,4) =  c_q_lower_neck_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::Type_fr_chassis_link_X_fr_lower_neck_link()
{
    (*this)(0,2) = 0;
    (*this)(0,5) = - 0.23819;
    (*this)(1,2) = 0;
    (*this)(1,5) = 0.13744;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,5) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0;
    (*this)(5,4) = 0;
    (*this)(5,5) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) = - s_q_lower_neck_joint_;
    (*this)(0,3) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(0,4) = ( 0.063 *  c_q_lower_neck_joint_);
    (*this)(1,0) =  s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    (*this)(1,3) = (- 0.063 *  c_q_lower_neck_joint_);
    (*this)(1,4) = ( 0.063 *  s_q_lower_neck_joint_);
    (*this)(2,3) = (( 0.23819 *  c_q_lower_neck_joint_) - ( 0.13744 *  s_q_lower_neck_joint_));
    (*this)(2,4) = ((- 0.23819 *  s_q_lower_neck_joint_) - ( 0.13744 *  c_q_lower_neck_joint_));
    (*this)(3,3) =  c_q_lower_neck_joint_;
    (*this)(3,4) = - s_q_lower_neck_joint_;
    (*this)(4,3) =  s_q_lower_neck_joint_;
    (*this)(4,4) =  c_q_lower_neck_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::Type_fr_upper_neck_link_X_fr_lower_neck_link()
{
    (*this)(2,0) = - 7.99999E-4;
    (*this)(2,1) = - 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.112686;
    (*this)(2,4) = 0.194749;
    (*this)(2,5) = - 3.5942E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 7.99999E-4;
    (*this)(5,4) = - 0.00138265;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(0,2) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(0,3) = (( 0.0628441 *  s_q_upper_neck_joint_) + ( 1.40424E-4 *  c_q_upper_neck_joint_));
    (*this)(0,4) = (( 0.0631555 *  c_q_upper_neck_joint_) - ( 3.19865E-4 *  s_q_upper_neck_joint_));
    (*this)(0,5) = (( 0.112443 *  c_q_upper_neck_joint_) - ( 0.194889 *  s_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(1,2) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    (*this)(1,3) = (( 0.0628441 *  c_q_upper_neck_joint_) - ( 1.40424E-4 *  s_q_upper_neck_joint_));
    (*this)(1,4) = ((- 0.0631555 *  s_q_upper_neck_joint_) - ( 3.19865E-4 *  c_q_upper_neck_joint_));
    (*this)(1,5) = ((- 0.112443 *  s_q_upper_neck_joint_) - ( 0.194889 *  c_q_upper_neck_joint_));
    (*this)(3,3) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(3,5) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(4,3) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(4,4) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(4,5) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::Type_fr_lower_neck_link_X_fr_upper_neck_link()
{
    (*this)(0,2) = - 7.99999E-4;
    (*this)(0,5) = 0.112686;
    (*this)(1,2) = - 0.00138265;
    (*this)(1,5) = 0.194749;
    (*this)(2,2) = - 0.999998;
    (*this)(2,5) = - 3.5942E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = - 7.99999E-4;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = - 0.00138265;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(0,3) = (( 0.0628441 *  s_q_upper_neck_joint_) + ( 1.40424E-4 *  c_q_upper_neck_joint_));
    (*this)(0,4) = (( 0.0628441 *  c_q_upper_neck_joint_) - ( 1.40424E-4 *  s_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(1,3) = (( 0.0631555 *  c_q_upper_neck_joint_) - ( 3.19865E-4 *  s_q_upper_neck_joint_));
    (*this)(1,4) = ((- 0.0631555 *  s_q_upper_neck_joint_) - ( 3.19865E-4 *  c_q_upper_neck_joint_));
    (*this)(2,0) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(2,1) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    (*this)(2,3) = (( 0.112443 *  c_q_upper_neck_joint_) - ( 0.194889 *  s_q_upper_neck_joint_));
    (*this)(2,4) = ((- 0.112443 *  s_q_upper_neck_joint_) - ( 0.194889 *  c_q_upper_neck_joint_));
    (*this)(3,3) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(3,4) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(4,4) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(5,3) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(5,4) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::Type_fr_head_link_X_fr_upper_neck_link()
{
    (*this)(2,0) = 0.866556;
    (*this)(2,1) = 0.499079;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,3) = 4.97096E-7;
    (*this)(2,4) = - 8.61512E-7;
    (*this)(2,5) = - 2.53052E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0.866556;
    (*this)(5,4) = 0.499079;
    (*this)(5,5) = 3.15757E-6;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(0,2) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(0,3) = ((- 0.157429 *  s_q_head_joint_) - ( 2.51176E-4 *  c_q_head_joint_));
    (*this)(0,4) = (( 0.272839 *  s_q_head_joint_) + ( 4.35311E-4 *  c_q_head_joint_));
    (*this)(0,5) = (( 5.02578E-4 *  s_q_head_joint_) - ( 0.315 *  c_q_head_joint_));
    (*this)(1,0) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(1,2) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    (*this)(1,3) = (( 2.51176E-4 *  s_q_head_joint_) - ( 0.157429 *  c_q_head_joint_));
    (*this)(1,4) = (( 0.272839 *  c_q_head_joint_) - ( 4.35311E-4 *  s_q_head_joint_));
    (*this)(1,5) = (( 0.315 *  s_q_head_joint_) + ( 5.02578E-4 *  c_q_head_joint_));
    (*this)(3,3) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(3,4) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(3,5) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(4,3) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(4,4) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(4,5) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::Type_fr_upper_neck_link_X_fr_head_link()
{
    (*this)(0,2) = 0.866556;
    (*this)(0,5) = 4.97096E-7;
    (*this)(1,2) = 0.499079;
    (*this)(1,5) = - 8.61512E-7;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,5) = - 2.53052E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0.866556;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0.499079;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 3.15757E-6;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(0,3) = ((- 0.157429 *  s_q_head_joint_) - ( 2.51176E-4 *  c_q_head_joint_));
    (*this)(0,4) = (( 2.51176E-4 *  s_q_head_joint_) - ( 0.157429 *  c_q_head_joint_));
    (*this)(1,0) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(1,3) = (( 0.272839 *  s_q_head_joint_) + ( 4.35311E-4 *  c_q_head_joint_));
    (*this)(1,4) = (( 0.272839 *  c_q_head_joint_) - ( 4.35311E-4 *  s_q_head_joint_));
    (*this)(2,0) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(2,1) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    (*this)(2,3) = (( 5.02578E-4 *  s_q_head_joint_) - ( 0.315 *  c_q_head_joint_));
    (*this)(2,4) = (( 0.315 *  s_q_head_joint_) + ( 5.02578E-4 *  c_q_head_joint_));
    (*this)(3,3) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(3,4) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(4,3) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(4,4) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(5,3) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(5,4) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::Type_fr_mouth_link_X_fr_head_link()
{
    (*this)(2,0) = - 0.00318999;
    (*this)(2,1) = - 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0.0264998;
    (*this)(2,4) = - 8.45348E-5;
    (*this)(2,5) = - 0.0230001;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 0.00318999;
    (*this)(5,4) = - 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(0,2) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(0,3) = ((- 1.08175E-4 *  s_q_mouth_joint_) - ( 1.85547E-5 *  c_q_mouth_joint_));
    (*this)(0,4) = ((- 0.0344371 *  s_q_mouth_joint_) - ( 0.00673245 *  c_q_mouth_joint_));
    (*this)(0,5) = (( 2.92182E-6 *  s_q_mouth_joint_) - ( 1.6797E-6 *  c_q_mouth_joint_));
    (*this)(1,0) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(1,2) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    (*this)(1,3) = (( 1.85547E-5 *  s_q_mouth_joint_) - ( 1.08175E-4 *  c_q_mouth_joint_));
    (*this)(1,4) = (( 0.00673245 *  s_q_mouth_joint_) - ( 0.0344371 *  c_q_mouth_joint_));
    (*this)(1,5) = (( 1.6797E-6 *  s_q_mouth_joint_) + ( 2.92182E-6 *  c_q_mouth_joint_));
    (*this)(3,3) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(3,4) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(3,5) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(4,3) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(4,4) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(4,5) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::Type_fr_head_link_X_fr_mouth_link()
{
    (*this)(0,2) = - 0.00318999;
    (*this)(0,5) = 0.0264998;
    (*this)(1,2) = - 0.999994;
    (*this)(1,5) = - 8.45348E-5;
    (*this)(2,2) = 0;
    (*this)(2,5) = - 0.0230001;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = - 0.00318999;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = - 0.999994;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(0,3) = ((- 1.08175E-4 *  s_q_mouth_joint_) - ( 1.85547E-5 *  c_q_mouth_joint_));
    (*this)(0,4) = (( 1.85547E-5 *  s_q_mouth_joint_) - ( 1.08175E-4 *  c_q_mouth_joint_));
    (*this)(1,0) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(1,3) = ((- 0.0344371 *  s_q_mouth_joint_) - ( 0.00673245 *  c_q_mouth_joint_));
    (*this)(1,4) = (( 0.00673245 *  s_q_mouth_joint_) - ( 0.0344371 *  c_q_mouth_joint_));
    (*this)(2,0) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(2,1) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    (*this)(2,3) = (( 2.92182E-6 *  s_q_mouth_joint_) - ( 1.6797E-6 *  c_q_mouth_joint_));
    (*this)(2,4) = (( 1.6797E-6 *  s_q_mouth_joint_) + ( 2.92182E-6 *  c_q_mouth_joint_));
    (*this)(3,3) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(3,4) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(4,3) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(4,4) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(5,3) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(5,4) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::Type_fr_left_ear_link_X_fr_head_link()
{
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.00499997;
    (*this)(2,4) = 1.59499E-5;
    (*this)(2,5) = 0.00200224;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0.00318999;
    (*this)(5,4) = 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(0,3) = (( 0.0536517 *  c_q_left_ear_joint_) - ( 0.0310524 *  s_q_left_ear_joint_));
    (*this)(0,4) = (( 0.00542931 *  s_q_left_ear_joint_) + ( 6.01939E-4 *  c_q_left_ear_joint_));
    (*this)(0,5) = ((- 0.0536495 *  s_q_left_ear_joint_) - ( 0.0310696 *  c_q_left_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    (*this)(1,3) = ((- 0.0536517 *  s_q_left_ear_joint_) - ( 0.0310524 *  c_q_left_ear_joint_));
    (*this)(1,4) = (( 0.00542931 *  c_q_left_ear_joint_) - ( 6.01939E-4 *  s_q_left_ear_joint_));
    (*this)(1,5) = (( 0.0310696 *  s_q_left_ear_joint_) - ( 0.0536495 *  c_q_left_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(3,4) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(3,5) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(4,3) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(4,5) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::Type_fr_head_link_X_fr_left_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,5) = - 0.00499997;
    (*this)(1,2) = 0.999994;
    (*this)(1,5) = 1.59499E-5;
    (*this)(2,2) = 0;
    (*this)(2,5) = 0.00200224;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0.00318999;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0.999994;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(0,3) = (( 0.0536517 *  c_q_left_ear_joint_) - ( 0.0310524 *  s_q_left_ear_joint_));
    (*this)(0,4) = ((- 0.0536517 *  s_q_left_ear_joint_) - ( 0.0310524 *  c_q_left_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(1,3) = (( 0.00542931 *  s_q_left_ear_joint_) + ( 6.01939E-4 *  c_q_left_ear_joint_));
    (*this)(1,4) = (( 0.00542931 *  c_q_left_ear_joint_) - ( 6.01939E-4 *  s_q_left_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    (*this)(2,3) = ((- 0.0536495 *  s_q_left_ear_joint_) - ( 0.0310696 *  c_q_left_ear_joint_));
    (*this)(2,4) = (( 0.0310696 *  s_q_left_ear_joint_) - ( 0.0536495 *  c_q_left_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(3,4) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(4,3) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(5,3) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(5,4) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::Type_fr_right_ear_link_X_fr_head_link()
{
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.00499997;
    (*this)(2,4) = 1.59499E-5;
    (*this)(2,5) = 0.0019978;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = 0.00318999;
    (*this)(5,4) = 0.999994;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(0,3) = (( 0.03109 *  s_q_right_ear_joint_) - ( 0.053653 *  c_q_right_ear_joint_));
    (*this)(0,4) = (( 0.00522885 *  s_q_right_ear_joint_) + ( 9.48083E-4 *  c_q_right_ear_joint_));
    (*this)(0,5) = (( 0.0536557 *  s_q_right_ear_joint_) + ( 0.0310732 *  c_q_right_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    (*this)(1,3) = (( 0.053653 *  s_q_right_ear_joint_) + ( 0.03109 *  c_q_right_ear_joint_));
    (*this)(1,4) = (( 0.00522885 *  c_q_right_ear_joint_) - ( 9.48083E-4 *  s_q_right_ear_joint_));
    (*this)(1,5) = (( 0.0536557 *  c_q_right_ear_joint_) - ( 0.0310732 *  s_q_right_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(3,4) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(3,5) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(4,3) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(4,5) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::Type_fr_head_link_X_fr_right_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,5) = - 0.00499997;
    (*this)(1,2) = 0.999994;
    (*this)(1,5) = 1.59499E-5;
    (*this)(2,2) = 0;
    (*this)(2,5) = 0.0019978;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = 0.00318999;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0.999994;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = 0;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(0,3) = (( 0.03109 *  s_q_right_ear_joint_) - ( 0.053653 *  c_q_right_ear_joint_));
    (*this)(0,4) = (( 0.053653 *  s_q_right_ear_joint_) + ( 0.03109 *  c_q_right_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(1,3) = (( 0.00522885 *  s_q_right_ear_joint_) + ( 9.48083E-4 *  c_q_right_ear_joint_));
    (*this)(1,4) = (( 0.00522885 *  c_q_right_ear_joint_) - ( 9.48083E-4 *  s_q_right_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    (*this)(2,3) = (( 0.0536557 *  s_q_right_ear_joint_) + ( 0.0310732 *  c_q_right_ear_joint_));
    (*this)(2,4) = (( 0.0536557 *  c_q_right_ear_joint_) - ( 0.0310732 *  s_q_right_ear_joint_));
    (*this)(3,3) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(3,4) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(4,3) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(4,4) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(5,3) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(5,4) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::Type_fr_upper_tail_link_X_fr_chassis_link()
{
    (*this)(2,0) = - 0.00137999;
    (*this)(2,1) = 7.92652E-4;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.238139;
    (*this)(2,4) = - 0.137526;
    (*this)(2,5) = - 4.37644E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 0.00137999;
    (*this)(5,4) = 7.92652E-4;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(0,2) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(0,3) = (( 0.0631882 *  s_q_upper_tail_joint_) + ( 4.15833E-4 *  c_q_upper_tail_joint_));
    (*this)(0,4) = (( 0.06281 *  c_q_upper_tail_joint_) - ( 1.9562E-4 *  s_q_upper_tail_joint_));
    (*this)(0,5) = (( 0.137111 *  s_q_upper_tail_joint_) + ( 0.238379 *  c_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(1,2) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    (*this)(1,3) = (( 0.0631882 *  c_q_upper_tail_joint_) - ( 4.15833E-4 *  s_q_upper_tail_joint_));
    (*this)(1,4) = ((- 0.06281 *  s_q_upper_tail_joint_) - ( 1.9562E-4 *  c_q_upper_tail_joint_));
    (*this)(1,5) = (( 0.137111 *  c_q_upper_tail_joint_) - ( 0.238379 *  s_q_upper_tail_joint_));
    (*this)(3,3) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(3,5) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(4,4) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(4,5) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::Type_fr_chassis_link_X_fr_upper_tail_link()
{
    (*this)(0,2) = - 0.00137999;
    (*this)(0,5) = 0.238139;
    (*this)(1,2) = 7.92652E-4;
    (*this)(1,5) = - 0.137526;
    (*this)(2,2) = - 0.999998;
    (*this)(2,5) = - 4.37644E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = - 0.00137999;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 7.92652E-4;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(0,3) = (( 0.0631882 *  s_q_upper_tail_joint_) + ( 4.15833E-4 *  c_q_upper_tail_joint_));
    (*this)(0,4) = (( 0.0631882 *  c_q_upper_tail_joint_) - ( 4.15833E-4 *  s_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(1,3) = (( 0.06281 *  c_q_upper_tail_joint_) - ( 1.9562E-4 *  s_q_upper_tail_joint_));
    (*this)(1,4) = ((- 0.06281 *  s_q_upper_tail_joint_) - ( 1.9562E-4 *  c_q_upper_tail_joint_));
    (*this)(2,0) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(2,1) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    (*this)(2,3) = (( 0.137111 *  s_q_upper_tail_joint_) + ( 0.238379 *  c_q_upper_tail_joint_));
    (*this)(2,4) = (( 0.137111 *  c_q_upper_tail_joint_) - ( 0.238379 *  s_q_upper_tail_joint_));
    (*this)(3,3) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(3,4) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(4,3) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(4,4) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(5,3) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(5,4) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::Type_fr_lower_tail_link_X_fr_upper_tail_link()
{
    (*this)(2,0) = - 7.89999E-4;
    (*this)(2,1) = 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.111932;
    (*this)(2,4) = - 0.195179;
    (*this)(2,5) = - 3.58292E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,3) = - 7.89999E-4;
    (*this)(5,4) = 0.00138265;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(0,2) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(0,3) = (( 0.0631545 *  s_q_lower_tail_joint_) + ( 2.12841E-4 *  c_q_lower_tail_joint_));
    (*this)(0,4) = (( 0.0628451 *  c_q_lower_tail_joint_) - ( 3.93602E-4 *  s_q_lower_tail_joint_));
    (*this)(0,5) = (( 0.194908 *  s_q_lower_tail_joint_) + ( 0.112403 *  c_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(1,2) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    (*this)(1,3) = (( 0.0631545 *  c_q_lower_tail_joint_) - ( 2.12841E-4 *  s_q_lower_tail_joint_));
    (*this)(1,4) = ((- 0.0628451 *  s_q_lower_tail_joint_) - ( 3.93602E-4 *  c_q_lower_tail_joint_));
    (*this)(1,5) = (( 0.194908 *  c_q_lower_tail_joint_) - ( 0.112403 *  s_q_lower_tail_joint_));
    (*this)(3,3) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(3,4) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(3,5) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(4,3) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(4,4) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(4,5) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::Type_fr_upper_tail_link_X_fr_lower_tail_link()
{
    (*this)(0,2) = - 7.89999E-4;
    (*this)(0,5) = 0.111932;
    (*this)(1,2) = 0.00138265;
    (*this)(1,5) = - 0.195179;
    (*this)(2,2) = - 0.999998;
    (*this)(2,5) = - 3.58292E-4;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,5) = - 7.89999E-4;
    (*this)(4,0) = 0;
    (*this)(4,1) = 0;
    (*this)(4,2) = 0;
    (*this)(4,5) = 0.00138265;
    (*this)(5,0) = 0;
    (*this)(5,1) = 0;
    (*this)(5,2) = 0;
    (*this)(5,5) = - 0.999998;
}
template <typename TRAIT>
const typename iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link& iit::frea::tpl::ForceTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(0,3) = (( 0.0631545 *  s_q_lower_tail_joint_) + ( 2.12841E-4 *  c_q_lower_tail_joint_));
    (*this)(0,4) = (( 0.0631545 *  c_q_lower_tail_joint_) - ( 2.12841E-4 *  s_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(1,3) = (( 0.0628451 *  c_q_lower_tail_joint_) - ( 3.93602E-4 *  s_q_lower_tail_joint_));
    (*this)(1,4) = ((- 0.0628451 *  s_q_lower_tail_joint_) - ( 3.93602E-4 *  c_q_lower_tail_joint_));
    (*this)(2,0) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(2,1) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    (*this)(2,3) = (( 0.194908 *  s_q_lower_tail_joint_) + ( 0.112403 *  c_q_lower_tail_joint_));
    (*this)(2,4) = (( 0.194908 *  c_q_lower_tail_joint_) - ( 0.112403 *  s_q_lower_tail_joint_));
    (*this)(3,3) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(3,4) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(4,3) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(4,4) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(5,3) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(5,4) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    return *this;
}

template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::Type_fr_chassis_link_X_fr_world()
{
    (*this)(0,1) = 0;
    (*this)(0,3) = 0;
    (*this)(1,1) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 1;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_world::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,2) = - s_q_chassis_joint_;
    (*this)(1,0) = - s_q_chassis_joint_;
    (*this)(1,2) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::Type_fr_world_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,0) = 0;
    (*this)(1,1) = 0;
    (*this)(1,2) = 1;
    (*this)(1,3) = 0;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_world_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_chassis_joint_;
    Scalar c_q_chassis_joint_;
    
    s_q_chassis_joint_ = TRAIT::sin( q(CHASSIS_JOINT));
    c_q_chassis_joint_ = TRAIT::cos( q(CHASSIS_JOINT));
    
    (*this)(0,0) =  c_q_chassis_joint_;
    (*this)(0,1) = - s_q_chassis_joint_;
    (*this)(2,0) = - s_q_chassis_joint_;
    (*this)(2,1) = - c_q_chassis_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::Type_fr_left_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1;
    (*this)(2,3) = - 0.198;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) =  s_q_left_wheel_joint_;
    (*this)(1,0) = - s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::Type_fr_chassis_link_X_fr_left_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.198;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_left_wheel_link::update(const JState& q) {
    Scalar s_q_left_wheel_joint_;
    Scalar c_q_left_wheel_joint_;
    
    s_q_left_wheel_joint_ = TRAIT::sin( q(LEFT_WHEEL_JOINT));
    c_q_left_wheel_joint_ = TRAIT::cos( q(LEFT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_left_wheel_joint_;
    (*this)(0,1) = - s_q_left_wheel_joint_;
    (*this)(1,0) =  s_q_left_wheel_joint_;
    (*this)(1,1) =  c_q_left_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::Type_fr_right_wheel_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1;
    (*this)(2,3) = - 0.198;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_wheel_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::Type_fr_chassis_link_X_fr_right_wheel_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = 0;
    (*this)(1,2) = 0;
    (*this)(1,3) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = - 1.0;
    (*this)(2,3) = - 0.198;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_right_wheel_link::update(const JState& q) {
    Scalar s_q_right_wheel_joint_;
    Scalar c_q_right_wheel_joint_;
    
    s_q_right_wheel_joint_ = TRAIT::sin( q(RIGHT_WHEEL_JOINT));
    c_q_right_wheel_joint_ = TRAIT::cos( q(RIGHT_WHEEL_JOINT));
    
    (*this)(0,0) =  c_q_right_wheel_joint_;
    (*this)(0,1) = - s_q_right_wheel_joint_;
    (*this)(1,0) = - s_q_right_wheel_joint_;
    (*this)(1,1) = - c_q_right_wheel_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::Type_fr_lower_neck_link_X_fr_chassis_link()
{
    (*this)(0,2) = 0;
    (*this)(1,2) = 0;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) =  s_q_lower_neck_joint_;
    (*this)(0,3) = (( 0.23819 *  s_q_lower_neck_joint_) + ( 0.13744 *  c_q_lower_neck_joint_));
    (*this)(1,0) = - s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    (*this)(1,3) = (( 0.23819 *  c_q_lower_neck_joint_) - ( 0.13744 *  s_q_lower_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::Type_fr_chassis_link_X_fr_lower_neck_link()
{
    (*this)(0,2) = 0;
    (*this)(0,3) = - 0.13744;
    (*this)(1,2) = 0;
    (*this)(1,3) = - 0.23819;
    (*this)(2,0) = 0;
    (*this)(2,1) = 0;
    (*this)(2,2) = 1.0;
    (*this)(2,3) = - 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_lower_neck_joint_;
    Scalar c_q_lower_neck_joint_;
    
    s_q_lower_neck_joint_ = TRAIT::sin( q(LOWER_NECK_JOINT));
    c_q_lower_neck_joint_ = TRAIT::cos( q(LOWER_NECK_JOINT));
    
    (*this)(0,0) =  c_q_lower_neck_joint_;
    (*this)(0,1) = - s_q_lower_neck_joint_;
    (*this)(1,0) =  s_q_lower_neck_joint_;
    (*this)(1,1) =  c_q_lower_neck_joint_;
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::Type_fr_upper_neck_link_X_fr_lower_neck_link()
{
    (*this)(2,0) = - 7.99999E-4;
    (*this)(2,1) = - 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_lower_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(0,2) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(0,3) = ((- 0.112531 *  s_q_upper_neck_joint_) - ( 0.194839 *  c_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(1,2) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    (*this)(1,3) = (( 0.194839 *  s_q_upper_neck_joint_) - ( 0.112531 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::Type_fr_lower_neck_link_X_fr_upper_neck_link()
{
    (*this)(0,2) = - 7.99999E-4;
    (*this)(0,3) = 0.1948;
    (*this)(1,2) = - 0.00138265;
    (*this)(1,3) = - 0.1126;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_neck_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_upper_neck_joint_;
    Scalar c_q_upper_neck_joint_;
    
    s_q_upper_neck_joint_ = TRAIT::sin( q(UPPER_NECK_JOINT));
    c_q_upper_neck_joint_ = TRAIT::cos( q(UPPER_NECK_JOINT));
    
    (*this)(0,0) = (( 0.999999 *  c_q_upper_neck_joint_) - ( 7.99999E-4 *  s_q_upper_neck_joint_));
    (*this)(0,1) = ((- 0.999999 *  s_q_upper_neck_joint_) - ( 7.99999E-4 *  c_q_upper_neck_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_neck_joint_) - ( 8.01105E-4 *  c_q_upper_neck_joint_));
    (*this)(1,1) = (( 8.01105E-4 *  s_q_upper_neck_joint_) - ( 0.999998 *  c_q_upper_neck_joint_));
    (*this)(2,0) = (( 0.00138329 *  s_q_upper_neck_joint_) - ( 7.98892E-4 *  c_q_upper_neck_joint_));
    (*this)(2,1) = (( 7.98892E-4 *  s_q_upper_neck_joint_) + ( 0.00138329 *  c_q_upper_neck_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::Type_fr_head_link_X_fr_upper_neck_link()
{
    (*this)(2,0) = 0.866556;
    (*this)(2,1) = 0.499079;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,3) = - 0.315001;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_upper_neck_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(0,2) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(0,3) = (( 2.5305E-4 *  c_q_head_joint_) - ( 1.39837E-6 *  s_q_head_joint_));
    (*this)(1,0) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(1,2) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    (*this)(1,3) = ((- 2.5305E-4 *  s_q_head_joint_) - ( 1.39837E-6 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::Type_fr_upper_neck_link_X_fr_head_link()
{
    (*this)(0,2) = 0.866556;
    (*this)(0,3) = 0.27284;
    (*this)(1,2) = 0.499079;
    (*this)(1,3) = 0.15743;
    (*this)(2,2) = 3.15757E-6;
    (*this)(2,3) = 0;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_neck_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_head_joint_;
    Scalar c_q_head_joint_;
    
    s_q_head_joint_ = TRAIT::sin( q(HEAD_JOINT));
    c_q_head_joint_ = TRAIT::cos( q(HEAD_JOINT));
    
    (*this)(0,0) = (( 0.499078 *  c_q_head_joint_) - ( 7.93536E-4 *  s_q_head_joint_));
    (*this)(0,1) = ((- 0.499078 *  s_q_head_joint_) - ( 7.93536E-4 *  c_q_head_joint_));
    (*this)(1,0) = (( 0.00138415 *  s_q_head_joint_) - ( 0.866555 *  c_q_head_joint_));
    (*this)(1,1) = (( 0.866555 *  s_q_head_joint_) + ( 0.00138415 *  c_q_head_joint_));
    (*this)(2,0) = ((- 0.999998 *  s_q_head_joint_) - ( 0.00159548 *  c_q_head_joint_));
    (*this)(2,1) = (( 0.00159548 *  s_q_head_joint_) - ( 0.999998 *  c_q_head_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::Type_fr_mouth_link_X_fr_head_link()
{
    (*this)(2,0) = - 0.00318999;
    (*this)(2,1) = - 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 3.37023E-6;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_mouth_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(0,2) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(0,3) = (( 0.00673248 *  s_q_mouth_joint_) - ( 0.0344373 *  c_q_mouth_joint_));
    (*this)(1,0) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(1,2) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    (*this)(1,3) = (( 0.0344373 *  s_q_mouth_joint_) + ( 0.00673248 *  c_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::Type_fr_head_link_X_fr_mouth_link()
{
    (*this)(0,2) = - 0.00318999;
    (*this)(0,3) = 0.023;
    (*this)(1,2) = - 0.999994;
    (*this)(1,3) = - 7.0E-5;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0.0265;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_mouth_link::update(const JState& q) {
    Scalar s_q_mouth_joint_;
    Scalar c_q_mouth_joint_;
    
    s_q_mouth_joint_ = TRAIT::sin( q(MOUTH_JOINT));
    c_q_mouth_joint_ = TRAIT::cos( q(MOUTH_JOINT));
    
    (*this)(0,0) = (( 0.498392 *  c_q_mouth_joint_) - ( 0.866945 *  s_q_mouth_joint_));
    (*this)(0,1) = ((- 0.498392 *  s_q_mouth_joint_) - ( 0.866945 *  c_q_mouth_joint_));
    (*this)(1,0) = (( 0.00276556 *  s_q_mouth_joint_) - ( 0.00158987 *  c_q_mouth_joint_));
    (*this)(1,1) = (( 0.00158987 *  s_q_mouth_joint_) + ( 0.00276556 *  c_q_mouth_joint_));
    (*this)(2,0) = (( 0.498394 *  s_q_mouth_joint_) + ( 0.86695 *  c_q_mouth_joint_));
    (*this)(2,1) = (( 0.498394 *  c_q_mouth_joint_) - ( 0.86695 *  s_q_mouth_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::Type_fr_left_ear_link_X_fr_head_link()
{
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = - 0.0619967;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_left_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(0,3) = (( 7.73085E-4 *  s_q_left_ear_joint_) - ( 0.00533022 *  c_q_left_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    (*this)(1,3) = (( 0.00533022 *  s_q_left_ear_joint_) + ( 7.73085E-4 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::Type_fr_head_link_X_fr_left_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,3) = 0.0022;
    (*this)(1,2) = 0.999994;
    (*this)(1,3) = 0.06199;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0.005;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_left_ear_link::update(const JState& q) {
    Scalar s_q_left_ear_joint_;
    Scalar c_q_left_ear_joint_;
    
    s_q_left_ear_joint_ = TRAIT::sin( q(LEFT_EAR_JOINT));
    c_q_left_ear_joint_ = TRAIT::cos( q(LEFT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_left_ear_joint_) + ( 0.501146 *  c_q_left_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_left_ear_joint_) - ( 0.501146 *  s_q_left_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_left_ear_joint_) - ( 0.00159866 *  c_q_left_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_left_ear_joint_) - ( 0.00276049 *  c_q_left_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_left_ear_joint_) - ( 0.501149 *  s_q_left_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_left_ear_joint_) - ( 0.501149 *  c_q_left_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::Type_fr_right_ear_link_X_fr_head_link()
{
    (*this)(2,0) = 0.00318999;
    (*this)(2,1) = 0.999994;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0.0620039;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_right_ear_link_X_fr_head_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(0,2) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(0,3) = (( 7.76926E-4 *  s_q_right_ear_joint_) - ( 0.005328 *  c_q_right_ear_joint_));
    (*this)(1,0) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(1,2) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    (*this)(1,3) = (( 0.005328 *  s_q_right_ear_joint_) + ( 7.76926E-4 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::Type_fr_head_link_X_fr_right_ear_link()
{
    (*this)(0,2) = 0.00318999;
    (*this)(0,3) = 0.0018;
    (*this)(1,2) = 0.999994;
    (*this)(1,3) = - 0.06201;
    (*this)(2,2) = 0;
    (*this)(2,3) = 0.005;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_head_link_X_fr_right_ear_link::update(const JState& q) {
    Scalar s_q_right_ear_joint_;
    Scalar c_q_right_ear_joint_;
    
    s_q_right_ear_joint_ = TRAIT::sin( q(RIGHT_EAR_JOINT));
    c_q_right_ear_joint_ = TRAIT::cos( q(RIGHT_EAR_JOINT));
    
    (*this)(0,0) = (( 0.865356 *  s_q_right_ear_joint_) + ( 0.501146 *  c_q_right_ear_joint_));
    (*this)(0,1) = (( 0.865356 *  c_q_right_ear_joint_) - ( 0.501146 *  s_q_right_ear_joint_));
    (*this)(1,0) = ((- 0.00276049 *  s_q_right_ear_joint_) - ( 0.00159866 *  c_q_right_ear_joint_));
    (*this)(1,1) = (( 0.00159866 *  s_q_right_ear_joint_) - ( 0.00276049 *  c_q_right_ear_joint_));
    (*this)(2,0) = (( 0.86536 *  c_q_right_ear_joint_) - ( 0.501149 *  s_q_right_ear_joint_));
    (*this)(2,1) = ((- 0.86536 *  s_q_right_ear_joint_) - ( 0.501149 *  c_q_right_ear_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::Type_fr_upper_tail_link_X_fr_chassis_link()
{
    (*this)(2,0) = - 0.00137999;
    (*this)(2,1) = 7.92652E-4;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.062999;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_chassis_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(0,2) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(0,3) = (( 0.137198 *  c_q_upper_tail_joint_) - ( 0.238329 *  s_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(1,2) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    (*this)(1,3) = ((- 0.137198 *  s_q_upper_tail_joint_) - ( 0.238329 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::Type_fr_chassis_link_X_fr_upper_tail_link()
{
    (*this)(0,2) = - 0.00137999;
    (*this)(0,3) = - 0.13744;
    (*this)(1,2) = 7.92652E-4;
    (*this)(1,3) = - 0.23819;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_chassis_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_upper_tail_joint_;
    Scalar c_q_upper_tail_joint_;
    
    s_q_upper_tail_joint_ = TRAIT::sin( q(UPPER_TAIL_JOINT));
    c_q_upper_tail_joint_ = TRAIT::cos( q(UPPER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999998 *  c_q_upper_tail_joint_) - ( 0.00137999 *  s_q_upper_tail_joint_));
    (*this)(0,1) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.00137999 *  c_q_upper_tail_joint_));
    (*this)(1,0) = ((- 0.999998 *  s_q_upper_tail_joint_) - ( 0.0013789 *  c_q_upper_tail_joint_));
    (*this)(1,1) = (( 0.0013789 *  s_q_upper_tail_joint_) - ( 0.999998 *  c_q_upper_tail_joint_));
    (*this)(2,0) = ((- 7.90748E-4 *  s_q_upper_tail_joint_) - ( 0.00138109 *  c_q_upper_tail_joint_));
    (*this)(2,1) = (( 0.00138109 *  s_q_upper_tail_joint_) - ( 7.90748E-4 *  c_q_upper_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::Type_fr_lower_tail_link_X_fr_upper_tail_link()
{
    (*this)(2,0) = - 7.89999E-4;
    (*this)(2,1) = 0.00138265;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.0630006;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_lower_tail_link_X_fr_upper_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(0,2) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(0,3) = (( 0.194958 *  c_q_lower_tail_joint_) - ( 0.112317 *  s_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(1,2) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    (*this)(1,3) = ((- 0.194958 *  s_q_lower_tail_joint_) - ( 0.112317 *  c_q_lower_tail_joint_));
    return *this;
}
template <typename TRAIT>
iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::Type_fr_upper_tail_link_X_fr_lower_tail_link()
{
    (*this)(0,2) = - 7.89999E-4;
    (*this)(0,3) = - 0.19513;
    (*this)(1,2) = 0.00138265;
    (*this)(1,3) = - 0.11202;
    (*this)(2,2) = - 0.999998;
    (*this)(2,3) = 0.063;
    (*this)(3,0) = 0;
    (*this)(3,1) = 0;
    (*this)(3,2) = 0;
    (*this)(3,3) = 1.0;
}
template <typename TRAIT>
const typename iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link& iit::frea::tpl::HomogeneousTransforms<TRAIT>::Type_fr_upper_tail_link_X_fr_lower_tail_link::update(const JState& q) {
    Scalar s_q_lower_tail_joint_;
    Scalar c_q_lower_tail_joint_;
    
    s_q_lower_tail_joint_ = TRAIT::sin( q(LOWER_TAIL_JOINT));
    c_q_lower_tail_joint_ = TRAIT::cos( q(LOWER_TAIL_JOINT));
    
    (*this)(0,0) = (( 0.999997 *  c_q_lower_tail_joint_) - ( 0.00196999 *  s_q_lower_tail_joint_));
    (*this)(0,1) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.00196999 *  c_q_lower_tail_joint_));
    (*this)(1,0) = ((- 0.999997 *  s_q_lower_tail_joint_) - ( 0.0019689 *  c_q_lower_tail_joint_));
    (*this)(1,1) = (( 0.0019689 *  s_q_lower_tail_joint_) - ( 0.999997 *  c_q_lower_tail_joint_));
    (*this)(2,0) = ((- 0.00138109 *  s_q_lower_tail_joint_) - ( 7.92721E-4 *  c_q_lower_tail_joint_));
    (*this)(2,1) = (( 7.92721E-4 *  s_q_lower_tail_joint_) - ( 0.00138109 *  c_q_lower_tail_joint_));
    return *this;
}
