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
extern int fn_82FF0478();
extern int fn_82FF5400();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_832642F4;


undefined8 fn_82FF0D20(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  RtlEnterCriticalSection(0xffffffff83264558);
  param_1[0x4c] = param_1[0x4c] + 1;
  if (*param_2 == 0) {
    if ((*(byte *)(param_1 + 0x36) & 0x1e) == 0) {
      uVar1 = 0;
    }
    else {
      if (param_1[0x17] != 0) {
        fn_82FF5400((double)lbl_8216C698,lbl_832642F4,param_1[0x17],0x4000000);
        RtlLeaveCriticalSection(0xffffffff83264558);
        return 1;
      }
      uVar1 = 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
    RtlLeaveCriticalSection(0xffffffff83264558);
  }
  else {
    fn_82FF0478(param_1,0,0x4000000,*(undefined8 *)param_2,1);
    RtlLeaveCriticalSection(0xffffffff83264558);
    uVar1 = 1;
  }
  return uVar1;
}

