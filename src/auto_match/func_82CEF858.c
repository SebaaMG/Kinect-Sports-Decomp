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
extern unsigned int lbl_8323B46C;


void fn_82CEF858(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffe2) {
    if ((uVar1 == 0xffffffe1) || (uVar1 == 0xffffffc1)) {
LAB_82cef8b8:
      RtlEnterCriticalSection(lbl_8323B46C);
      uVar1 = 0xffffffe1;
      if (param_2 != 1) {
        uVar1 = 0xffffffc1;
      }
      *param_1 = uVar1;
      goto LAB_82cef8dc;
    }
    if (uVar1 == 0xffffffd1) {
      return;
    }
  }
  else if (uVar1 == 0xfffffff1) goto LAB_82cef8b8;
  RtlEnterCriticalSection(lbl_8323B46C);
LAB_82cef8dc:
  *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
  *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) << 1;
  RtlLeaveCriticalSection(lbl_8323B46C);
  return;
}

