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
extern int fn_824BC468();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern unsigned int lbl_824BC5A0;


void fn_824BC388(int param_1,int param_2)

{
  char cVar2;
  int iVar1;
  
  if (param_2 != 0) {
    cVar2 = fn_828EA610(param_2);
    if (cVar2 == '\0') {
      cVar2 = fn_828EA5F8(param_2);
      if (cVar2 != '\0') {
        if (*(int *)(*(int *)(param_2 + 0x100) + 0x8dc) != 1) {
          *(undefined4 *)(*(int *)(param_2 + 0x100) + 0x8dc) = 1;
        }
        RtlEnterCriticalSection(param_1);
        if (*(int *)(param_1 + 0x30) == 0) {
          RtlLeaveCriticalSection(param_1);
          cVar2 = fn_82512508(param_2);
          if ((cVar2 == '\0') || (iVar1 = fn_824BC468(param_1,param_2), iVar1 == 0)) {
            *(undefined4 *)(param_1 + 0x34) = 1;
          }
          else {
            *(int *)(param_1 + 0x1c) = param_2;
            *(undefined4 *)(param_1 + 0x30) = 1;
            *(undefined4 *)(param_1 + 0x20) = 0x237;
            *(undefined4 *)(param_1 + 0x24) = 4;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(undefined **)(param_1 + 0x2c) = &lbl_824BC5A0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = 1;
          RtlLeaveCriticalSection(param_1);
        }
      }
    }
  }
  return;
}

