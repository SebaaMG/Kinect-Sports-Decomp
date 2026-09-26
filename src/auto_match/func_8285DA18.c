typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8280B788();
extern int fn_8280C450();
extern int fn_8280CB70();
extern int fn_8280D598();
extern int fn_82810360();
extern int fn_82811898();
extern int fn_8285CF40();
extern int fn_82861370();
extern int fn_82F68CC0();
extern int fn_8306BA08();
extern unsigned int lbl_83211400;
extern unsigned int lbl_83211404;
extern unsigned int lbl_832115A5;


void fn_8285DA18(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  undefined4 uVar1;
  
  if (param_4 != (float *)0x832114b0) {
    fn_82F68CC0(0xffffffff832114b0,param_4,0x18);
  }
  fn_82810360(param_1,0xffffffff83211528);
  fn_8280D598(0xffffffff83211340,param_1,param_2,param_3);
  fn_8280C450(0xffffffff83211340,0xffffffff83211380);
  uVar1 = lbl_83211404;
  if (lbl_83211400 != 0) {
    fn_8280CB70(0xffffffff83211340,lbl_83211400,0xffffffff83211340);
    fn_8280CB70(uVar1,0xffffffff83211380,0xffffffff83211380);
  }
  fn_82861370(param_4,0xffffffff83211380,0xffffffff83211408);
  fn_8280B788((double)*param_4,(double)param_4[1],(double)param_4[2],(double)param_4[3],
               (double)param_4[4],(double)param_4[5],0xffffffff832113c0);
  fn_8306BA08(0xffffffff83211408,0xffffffff832114c8);
  fn_8285CF40(param_5,param_4,0xffffffff8321154c,0xffffffff83211554,0xffffffff8321156c);
  if (param_5 != (float *)0x83211534) {
    fn_82F68CC0(0xffffffff83211534,param_5,0x18);
  }
  fn_82811898((double)*param_5,(double)param_5[1],0xffffffff8321155c);
  fn_82811898((double)(param_5[2] + *param_5),(double)(param_5[3] + param_5[1]),0xffffffff83211564)
  ;
  lbl_832115A5 = 1;
  return;
}

