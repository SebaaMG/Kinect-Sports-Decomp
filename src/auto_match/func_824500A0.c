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
extern int fn_82337D48();
extern int fn_8242E688();
extern int fn_82440B28();


undefined8
fn_824500A0(double param_1,undefined8 param_2,int *param_3,undefined8 param_4,byte param_5)

{
  int iVar1;
  
  (**(code **)(*param_3 + 0x28))(param_3);
  if (((double)*(float *)param_3[0x11] <= param_1) &&
     (iVar1 = fn_8242E688(*(undefined4 *)param_3[0x10],param_5), iVar1 != 0)) {
    fn_82337D48();
  }
  fn_82440B28((double)(float)((double)*(float *)param_3[0x11] - param_1),
                    (double)(*(float *)(*(int *)(*(int *)(*(int *)param_3[0x10] + 0x174) + 4) + 4) *
                            (float)param_5),param_2,*(int *)(*(int *)param_3[0x10] + 0x174) + 4);
  return param_2;
}

