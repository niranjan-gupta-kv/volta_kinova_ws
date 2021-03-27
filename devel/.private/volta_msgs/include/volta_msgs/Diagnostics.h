// Generated by gencpp from file volta_msgs/Diagnostics.msg
// DO NOT EDIT!


#ifndef VOLTA_MSGS_MESSAGE_DIAGNOSTICS_H
#define VOLTA_MSGS_MESSAGE_DIAGNOSTICS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace volta_msgs
{
template <class ContainerAllocator>
struct Diagnostics_
{
  typedef Diagnostics_<ContainerAllocator> Type;

  Diagnostics_()
    : LOWBATTERY_FLAG(false)
    , CHARGING_FLAG(false)
    , MOTOR_ALARM_FLAG(false)
    , BMS_ALARM_FLAG(false)
    , HIGH_TEMP_FLAG(false)
    , COMM_ERROR_FLAG(false)
    , BMS_SOC(0)
    , BMS_SOH(0)
    , BMS_Voltage(0)
    , BMS_Current(0)
    , BMS_voltageDiff(0)
    , BMS_tempDiff(0)
    , BMS_BCUMode(0)
    , BMS_Alarm(0)
    , M_State()
    , M_Alarm()
    , M_Power()
    , M_Voltage()
    , M_Current()
    , M_Comm()
    , Relay_Temp(0.0)
    , PowerConn_Temp(0.0)
    , PreCharge_Temp(0.0)
    , Power_Supply_Temp(0.0)
    , Battery_In_Volt(0.0)
    , PRE_CHARGE_Volt(0.0)
    , HW_ESTOP_Volt(0.0)
    , SW_ESTOP_Volt(0.0)
    , Motor_Alarm_Code()
    , Motor_Fun_Fail()
    , M_INIT()
    , M_CW()
    , M_CCW()
    , M_STOP()
    , M_BREAK()
    , M_SETRPM()
    , M_GETRPM()
    , M_PARAM()
    , M_ALARM()
    , PRECHARGE_FUSE(0)
    , MOTOR_FUSE(0)
    , LED_STATE(0)  {
      M_State.assign(0);

      M_Alarm.assign(0);

      M_Power.assign(0);

      M_Voltage.assign(0);

      M_Current.assign(0);

      M_Comm.assign(0);

      Motor_Alarm_Code.assign(0);

      Motor_Fun_Fail.assign(0);

      M_INIT.assign(0);

      M_CW.assign(0);

      M_CCW.assign(0);

      M_STOP.assign(0);

      M_BREAK.assign(0);

      M_SETRPM.assign(0);

      M_GETRPM.assign(0);

      M_PARAM.assign(0);

      M_ALARM.assign(0);
  }
  Diagnostics_(const ContainerAllocator& _alloc)
    : LOWBATTERY_FLAG(false)
    , CHARGING_FLAG(false)
    , MOTOR_ALARM_FLAG(false)
    , BMS_ALARM_FLAG(false)
    , HIGH_TEMP_FLAG(false)
    , COMM_ERROR_FLAG(false)
    , BMS_SOC(0)
    , BMS_SOH(0)
    , BMS_Voltage(0)
    , BMS_Current(0)
    , BMS_voltageDiff(0)
    , BMS_tempDiff(0)
    , BMS_BCUMode(0)
    , BMS_Alarm(0)
    , M_State()
    , M_Alarm()
    , M_Power()
    , M_Voltage()
    , M_Current()
    , M_Comm()
    , Relay_Temp(0.0)
    , PowerConn_Temp(0.0)
    , PreCharge_Temp(0.0)
    , Power_Supply_Temp(0.0)
    , Battery_In_Volt(0.0)
    , PRE_CHARGE_Volt(0.0)
    , HW_ESTOP_Volt(0.0)
    , SW_ESTOP_Volt(0.0)
    , Motor_Alarm_Code()
    , Motor_Fun_Fail()
    , M_INIT()
    , M_CW()
    , M_CCW()
    , M_STOP()
    , M_BREAK()
    , M_SETRPM()
    , M_GETRPM()
    , M_PARAM()
    , M_ALARM()
    , PRECHARGE_FUSE(0)
    , MOTOR_FUSE(0)
    , LED_STATE(0)  {
  (void)_alloc;
      M_State.assign(0);

      M_Alarm.assign(0);

      M_Power.assign(0);

      M_Voltage.assign(0);

      M_Current.assign(0);

      M_Comm.assign(0);

      Motor_Alarm_Code.assign(0);

      Motor_Fun_Fail.assign(0);

      M_INIT.assign(0);

      M_CW.assign(0);

      M_CCW.assign(0);

      M_STOP.assign(0);

      M_BREAK.assign(0);

      M_SETRPM.assign(0);

      M_GETRPM.assign(0);

      M_PARAM.assign(0);

      M_ALARM.assign(0);
  }



   typedef uint8_t _LOWBATTERY_FLAG_type;
  _LOWBATTERY_FLAG_type LOWBATTERY_FLAG;

   typedef uint8_t _CHARGING_FLAG_type;
  _CHARGING_FLAG_type CHARGING_FLAG;

   typedef uint8_t _MOTOR_ALARM_FLAG_type;
  _MOTOR_ALARM_FLAG_type MOTOR_ALARM_FLAG;

   typedef uint8_t _BMS_ALARM_FLAG_type;
  _BMS_ALARM_FLAG_type BMS_ALARM_FLAG;

   typedef uint8_t _HIGH_TEMP_FLAG_type;
  _HIGH_TEMP_FLAG_type HIGH_TEMP_FLAG;

   typedef uint8_t _COMM_ERROR_FLAG_type;
  _COMM_ERROR_FLAG_type COMM_ERROR_FLAG;

   typedef uint16_t _BMS_SOC_type;
  _BMS_SOC_type BMS_SOC;

   typedef uint16_t _BMS_SOH_type;
  _BMS_SOH_type BMS_SOH;

   typedef uint16_t _BMS_Voltage_type;
  _BMS_Voltage_type BMS_Voltage;

   typedef int16_t _BMS_Current_type;
  _BMS_Current_type BMS_Current;

   typedef uint16_t _BMS_voltageDiff_type;
  _BMS_voltageDiff_type BMS_voltageDiff;

   typedef uint16_t _BMS_tempDiff_type;
  _BMS_tempDiff_type BMS_tempDiff;

   typedef uint16_t _BMS_BCUMode_type;
  _BMS_BCUMode_type BMS_BCUMode;

   typedef uint16_t _BMS_Alarm_type;
  _BMS_Alarm_type BMS_Alarm;

   typedef boost::array<uint16_t, 2>  _M_State_type;
  _M_State_type M_State;

   typedef boost::array<uint16_t, 2>  _M_Alarm_type;
  _M_Alarm_type M_Alarm;

   typedef boost::array<uint16_t, 2>  _M_Power_type;
  _M_Power_type M_Power;

   typedef boost::array<uint16_t, 2>  _M_Voltage_type;
  _M_Voltage_type M_Voltage;

   typedef boost::array<uint16_t, 2>  _M_Current_type;
  _M_Current_type M_Current;

   typedef boost::array<uint8_t, 2>  _M_Comm_type;
  _M_Comm_type M_Comm;

   typedef float _Relay_Temp_type;
  _Relay_Temp_type Relay_Temp;

   typedef float _PowerConn_Temp_type;
  _PowerConn_Temp_type PowerConn_Temp;

   typedef float _PreCharge_Temp_type;
  _PreCharge_Temp_type PreCharge_Temp;

   typedef float _Power_Supply_Temp_type;
  _Power_Supply_Temp_type Power_Supply_Temp;

   typedef float _Battery_In_Volt_type;
  _Battery_In_Volt_type Battery_In_Volt;

   typedef float _PRE_CHARGE_Volt_type;
  _PRE_CHARGE_Volt_type PRE_CHARGE_Volt;

   typedef float _HW_ESTOP_Volt_type;
  _HW_ESTOP_Volt_type HW_ESTOP_Volt;

   typedef float _SW_ESTOP_Volt_type;
  _SW_ESTOP_Volt_type SW_ESTOP_Volt;

   typedef boost::array<uint16_t, 2>  _Motor_Alarm_Code_type;
  _Motor_Alarm_Code_type Motor_Alarm_Code;

   typedef boost::array<uint32_t, 2>  _Motor_Fun_Fail_type;
  _Motor_Fun_Fail_type Motor_Fun_Fail;

   typedef boost::array<uint16_t, 2>  _M_INIT_type;
  _M_INIT_type M_INIT;

   typedef boost::array<uint16_t, 2>  _M_CW_type;
  _M_CW_type M_CW;

   typedef boost::array<uint16_t, 2>  _M_CCW_type;
  _M_CCW_type M_CCW;

   typedef boost::array<uint16_t, 2>  _M_STOP_type;
  _M_STOP_type M_STOP;

   typedef boost::array<uint16_t, 2>  _M_BREAK_type;
  _M_BREAK_type M_BREAK;

   typedef boost::array<uint16_t, 2>  _M_SETRPM_type;
  _M_SETRPM_type M_SETRPM;

   typedef boost::array<uint16_t, 2>  _M_GETRPM_type;
  _M_GETRPM_type M_GETRPM;

   typedef boost::array<uint16_t, 2>  _M_PARAM_type;
  _M_PARAM_type M_PARAM;

   typedef boost::array<uint16_t, 2>  _M_ALARM_type;
  _M_ALARM_type M_ALARM;

   typedef uint8_t _PRECHARGE_FUSE_type;
  _PRECHARGE_FUSE_type PRECHARGE_FUSE;

   typedef uint8_t _MOTOR_FUSE_type;
  _MOTOR_FUSE_type MOTOR_FUSE;

   typedef uint8_t _LED_STATE_type;
  _LED_STATE_type LED_STATE;





  typedef boost::shared_ptr< ::volta_msgs::Diagnostics_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::volta_msgs::Diagnostics_<ContainerAllocator> const> ConstPtr;

}; // struct Diagnostics_

typedef ::volta_msgs::Diagnostics_<std::allocator<void> > Diagnostics;

typedef boost::shared_ptr< ::volta_msgs::Diagnostics > DiagnosticsPtr;
typedef boost::shared_ptr< ::volta_msgs::Diagnostics const> DiagnosticsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::volta_msgs::Diagnostics_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::volta_msgs::Diagnostics_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::volta_msgs::Diagnostics_<ContainerAllocator1> & lhs, const ::volta_msgs::Diagnostics_<ContainerAllocator2> & rhs)
{
  return lhs.LOWBATTERY_FLAG == rhs.LOWBATTERY_FLAG &&
    lhs.CHARGING_FLAG == rhs.CHARGING_FLAG &&
    lhs.MOTOR_ALARM_FLAG == rhs.MOTOR_ALARM_FLAG &&
    lhs.BMS_ALARM_FLAG == rhs.BMS_ALARM_FLAG &&
    lhs.HIGH_TEMP_FLAG == rhs.HIGH_TEMP_FLAG &&
    lhs.COMM_ERROR_FLAG == rhs.COMM_ERROR_FLAG &&
    lhs.BMS_SOC == rhs.BMS_SOC &&
    lhs.BMS_SOH == rhs.BMS_SOH &&
    lhs.BMS_Voltage == rhs.BMS_Voltage &&
    lhs.BMS_Current == rhs.BMS_Current &&
    lhs.BMS_voltageDiff == rhs.BMS_voltageDiff &&
    lhs.BMS_tempDiff == rhs.BMS_tempDiff &&
    lhs.BMS_BCUMode == rhs.BMS_BCUMode &&
    lhs.BMS_Alarm == rhs.BMS_Alarm &&
    lhs.M_State == rhs.M_State &&
    lhs.M_Alarm == rhs.M_Alarm &&
    lhs.M_Power == rhs.M_Power &&
    lhs.M_Voltage == rhs.M_Voltage &&
    lhs.M_Current == rhs.M_Current &&
    lhs.M_Comm == rhs.M_Comm &&
    lhs.Relay_Temp == rhs.Relay_Temp &&
    lhs.PowerConn_Temp == rhs.PowerConn_Temp &&
    lhs.PreCharge_Temp == rhs.PreCharge_Temp &&
    lhs.Power_Supply_Temp == rhs.Power_Supply_Temp &&
    lhs.Battery_In_Volt == rhs.Battery_In_Volt &&
    lhs.PRE_CHARGE_Volt == rhs.PRE_CHARGE_Volt &&
    lhs.HW_ESTOP_Volt == rhs.HW_ESTOP_Volt &&
    lhs.SW_ESTOP_Volt == rhs.SW_ESTOP_Volt &&
    lhs.Motor_Alarm_Code == rhs.Motor_Alarm_Code &&
    lhs.Motor_Fun_Fail == rhs.Motor_Fun_Fail &&
    lhs.M_INIT == rhs.M_INIT &&
    lhs.M_CW == rhs.M_CW &&
    lhs.M_CCW == rhs.M_CCW &&
    lhs.M_STOP == rhs.M_STOP &&
    lhs.M_BREAK == rhs.M_BREAK &&
    lhs.M_SETRPM == rhs.M_SETRPM &&
    lhs.M_GETRPM == rhs.M_GETRPM &&
    lhs.M_PARAM == rhs.M_PARAM &&
    lhs.M_ALARM == rhs.M_ALARM &&
    lhs.PRECHARGE_FUSE == rhs.PRECHARGE_FUSE &&
    lhs.MOTOR_FUSE == rhs.MOTOR_FUSE &&
    lhs.LED_STATE == rhs.LED_STATE;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::volta_msgs::Diagnostics_<ContainerAllocator1> & lhs, const ::volta_msgs::Diagnostics_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace volta_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::Diagnostics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::volta_msgs::Diagnostics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::Diagnostics_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::volta_msgs::Diagnostics_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::Diagnostics_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::volta_msgs::Diagnostics_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::volta_msgs::Diagnostics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "724ceb6ccb5d72d3af9209169201c96c";
  }

  static const char* value(const ::volta_msgs::Diagnostics_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x724ceb6ccb5d72d3ULL;
  static const uint64_t static_value2 = 0xaf9209169201c96cULL;
};

template<class ContainerAllocator>
struct DataType< ::volta_msgs::Diagnostics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "volta_msgs/Diagnostics";
  }

  static const char* value(const ::volta_msgs::Diagnostics_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::volta_msgs::Diagnostics_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool LOWBATTERY_FLAG\n"
"bool CHARGING_FLAG\n"
"bool MOTOR_ALARM_FLAG\n"
"bool BMS_ALARM_FLAG\n"
"bool HIGH_TEMP_FLAG\n"
"bool COMM_ERROR_FLAG\n"
"\n"
"uint16 BMS_SOC\n"
"uint16 BMS_SOH\n"
"uint16 BMS_Voltage\n"
"int16 BMS_Current\n"
"uint16 BMS_voltageDiff\n"
"uint16 BMS_tempDiff\n"
"uint16 BMS_BCUMode\n"
"uint16 BMS_Alarm\n"
"\n"
"uint16[2] M_State\n"
"uint16[2] M_Alarm\n"
"uint16[2] M_Power\n"
"uint16[2] M_Voltage\n"
"uint16[2] M_Current\n"
"uint8[2] M_Comm\n"
"\n"
"float32 Relay_Temp\n"
"float32 PowerConn_Temp\n"
"float32 PreCharge_Temp\n"
"float32 Power_Supply_Temp\n"
"\n"
"\n"
"float32 Battery_In_Volt\n"
"float32 PRE_CHARGE_Volt\n"
"float32 HW_ESTOP_Volt\n"
"float32 SW_ESTOP_Volt\n"
"\n"
"uint16[2] Motor_Alarm_Code\n"
"uint32[2] Motor_Fun_Fail\n"
"\n"
"uint16[2] M_INIT\n"
"uint16[2] M_CW\n"
"uint16[2] M_CCW\n"
"uint16[2] M_STOP\n"
"uint16[2] M_BREAK\n"
"uint16[2] M_SETRPM\n"
"uint16[2] M_GETRPM\n"
"uint16[2] M_PARAM\n"
"uint16[2] M_ALARM\n"
"\n"
"uint8 PRECHARGE_FUSE\n"
"uint8 MOTOR_FUSE\n"
"uint8 LED_STATE\n"
;
  }

  static const char* value(const ::volta_msgs::Diagnostics_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::volta_msgs::Diagnostics_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.LOWBATTERY_FLAG);
      stream.next(m.CHARGING_FLAG);
      stream.next(m.MOTOR_ALARM_FLAG);
      stream.next(m.BMS_ALARM_FLAG);
      stream.next(m.HIGH_TEMP_FLAG);
      stream.next(m.COMM_ERROR_FLAG);
      stream.next(m.BMS_SOC);
      stream.next(m.BMS_SOH);
      stream.next(m.BMS_Voltage);
      stream.next(m.BMS_Current);
      stream.next(m.BMS_voltageDiff);
      stream.next(m.BMS_tempDiff);
      stream.next(m.BMS_BCUMode);
      stream.next(m.BMS_Alarm);
      stream.next(m.M_State);
      stream.next(m.M_Alarm);
      stream.next(m.M_Power);
      stream.next(m.M_Voltage);
      stream.next(m.M_Current);
      stream.next(m.M_Comm);
      stream.next(m.Relay_Temp);
      stream.next(m.PowerConn_Temp);
      stream.next(m.PreCharge_Temp);
      stream.next(m.Power_Supply_Temp);
      stream.next(m.Battery_In_Volt);
      stream.next(m.PRE_CHARGE_Volt);
      stream.next(m.HW_ESTOP_Volt);
      stream.next(m.SW_ESTOP_Volt);
      stream.next(m.Motor_Alarm_Code);
      stream.next(m.Motor_Fun_Fail);
      stream.next(m.M_INIT);
      stream.next(m.M_CW);
      stream.next(m.M_CCW);
      stream.next(m.M_STOP);
      stream.next(m.M_BREAK);
      stream.next(m.M_SETRPM);
      stream.next(m.M_GETRPM);
      stream.next(m.M_PARAM);
      stream.next(m.M_ALARM);
      stream.next(m.PRECHARGE_FUSE);
      stream.next(m.MOTOR_FUSE);
      stream.next(m.LED_STATE);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Diagnostics_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::volta_msgs::Diagnostics_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::volta_msgs::Diagnostics_<ContainerAllocator>& v)
  {
    s << indent << "LOWBATTERY_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LOWBATTERY_FLAG);
    s << indent << "CHARGING_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.CHARGING_FLAG);
    s << indent << "MOTOR_ALARM_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.MOTOR_ALARM_FLAG);
    s << indent << "BMS_ALARM_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.BMS_ALARM_FLAG);
    s << indent << "HIGH_TEMP_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.HIGH_TEMP_FLAG);
    s << indent << "COMM_ERROR_FLAG: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.COMM_ERROR_FLAG);
    s << indent << "BMS_SOC: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_SOC);
    s << indent << "BMS_SOH: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_SOH);
    s << indent << "BMS_Voltage: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_Voltage);
    s << indent << "BMS_Current: ";
    Printer<int16_t>::stream(s, indent + "  ", v.BMS_Current);
    s << indent << "BMS_voltageDiff: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_voltageDiff);
    s << indent << "BMS_tempDiff: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_tempDiff);
    s << indent << "BMS_BCUMode: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_BCUMode);
    s << indent << "BMS_Alarm: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.BMS_Alarm);
    s << indent << "M_State[]" << std::endl;
    for (size_t i = 0; i < v.M_State.size(); ++i)
    {
      s << indent << "  M_State[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_State[i]);
    }
    s << indent << "M_Alarm[]" << std::endl;
    for (size_t i = 0; i < v.M_Alarm.size(); ++i)
    {
      s << indent << "  M_Alarm[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_Alarm[i]);
    }
    s << indent << "M_Power[]" << std::endl;
    for (size_t i = 0; i < v.M_Power.size(); ++i)
    {
      s << indent << "  M_Power[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_Power[i]);
    }
    s << indent << "M_Voltage[]" << std::endl;
    for (size_t i = 0; i < v.M_Voltage.size(); ++i)
    {
      s << indent << "  M_Voltage[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_Voltage[i]);
    }
    s << indent << "M_Current[]" << std::endl;
    for (size_t i = 0; i < v.M_Current.size(); ++i)
    {
      s << indent << "  M_Current[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_Current[i]);
    }
    s << indent << "M_Comm[]" << std::endl;
    for (size_t i = 0; i < v.M_Comm.size(); ++i)
    {
      s << indent << "  M_Comm[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.M_Comm[i]);
    }
    s << indent << "Relay_Temp: ";
    Printer<float>::stream(s, indent + "  ", v.Relay_Temp);
    s << indent << "PowerConn_Temp: ";
    Printer<float>::stream(s, indent + "  ", v.PowerConn_Temp);
    s << indent << "PreCharge_Temp: ";
    Printer<float>::stream(s, indent + "  ", v.PreCharge_Temp);
    s << indent << "Power_Supply_Temp: ";
    Printer<float>::stream(s, indent + "  ", v.Power_Supply_Temp);
    s << indent << "Battery_In_Volt: ";
    Printer<float>::stream(s, indent + "  ", v.Battery_In_Volt);
    s << indent << "PRE_CHARGE_Volt: ";
    Printer<float>::stream(s, indent + "  ", v.PRE_CHARGE_Volt);
    s << indent << "HW_ESTOP_Volt: ";
    Printer<float>::stream(s, indent + "  ", v.HW_ESTOP_Volt);
    s << indent << "SW_ESTOP_Volt: ";
    Printer<float>::stream(s, indent + "  ", v.SW_ESTOP_Volt);
    s << indent << "Motor_Alarm_Code[]" << std::endl;
    for (size_t i = 0; i < v.Motor_Alarm_Code.size(); ++i)
    {
      s << indent << "  Motor_Alarm_Code[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.Motor_Alarm_Code[i]);
    }
    s << indent << "Motor_Fun_Fail[]" << std::endl;
    for (size_t i = 0; i < v.Motor_Fun_Fail.size(); ++i)
    {
      s << indent << "  Motor_Fun_Fail[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.Motor_Fun_Fail[i]);
    }
    s << indent << "M_INIT[]" << std::endl;
    for (size_t i = 0; i < v.M_INIT.size(); ++i)
    {
      s << indent << "  M_INIT[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_INIT[i]);
    }
    s << indent << "M_CW[]" << std::endl;
    for (size_t i = 0; i < v.M_CW.size(); ++i)
    {
      s << indent << "  M_CW[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_CW[i]);
    }
    s << indent << "M_CCW[]" << std::endl;
    for (size_t i = 0; i < v.M_CCW.size(); ++i)
    {
      s << indent << "  M_CCW[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_CCW[i]);
    }
    s << indent << "M_STOP[]" << std::endl;
    for (size_t i = 0; i < v.M_STOP.size(); ++i)
    {
      s << indent << "  M_STOP[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_STOP[i]);
    }
    s << indent << "M_BREAK[]" << std::endl;
    for (size_t i = 0; i < v.M_BREAK.size(); ++i)
    {
      s << indent << "  M_BREAK[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_BREAK[i]);
    }
    s << indent << "M_SETRPM[]" << std::endl;
    for (size_t i = 0; i < v.M_SETRPM.size(); ++i)
    {
      s << indent << "  M_SETRPM[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_SETRPM[i]);
    }
    s << indent << "M_GETRPM[]" << std::endl;
    for (size_t i = 0; i < v.M_GETRPM.size(); ++i)
    {
      s << indent << "  M_GETRPM[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_GETRPM[i]);
    }
    s << indent << "M_PARAM[]" << std::endl;
    for (size_t i = 0; i < v.M_PARAM.size(); ++i)
    {
      s << indent << "  M_PARAM[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_PARAM[i]);
    }
    s << indent << "M_ALARM[]" << std::endl;
    for (size_t i = 0; i < v.M_ALARM.size(); ++i)
    {
      s << indent << "  M_ALARM[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.M_ALARM[i]);
    }
    s << indent << "PRECHARGE_FUSE: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.PRECHARGE_FUSE);
    s << indent << "MOTOR_FUSE: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.MOTOR_FUSE);
    s << indent << "LED_STATE: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.LED_STATE);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VOLTA_MSGS_MESSAGE_DIAGNOSTICS_H
