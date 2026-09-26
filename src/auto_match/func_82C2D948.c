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
extern int fn_82A6ADE0();
extern int fn_82C3DCE8();
extern int fn_82C3DF08();
extern int fn_82C3E110();
extern int fn_82C3E3E8();
extern int fn_82C3E860();
extern int fn_82C3EC38();
extern int fn_82C3EE10();
extern int fn_82C3F1B8();
extern int fn_82C3FC50();
extern int fn_82C410F0();
extern int fn_82C41598();
extern int fn_82C43008();
extern int fn_82C435C0();
extern int fn_82C439F8();


undefined8 fn_82C2D948(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  
  fn_82A6ADE0();
  *(code **)(param_1 + 0x1f0) = fn_82C41598;
  *(code **)(param_1 + 0x204) = fn_82C410F0;
  if (*(ushort *)(param_1 + 0x6e) < 0x11) {
    pcVar4 = fn_82C3DCE8;
    pcVar3 = fn_82C3E110;
    pcVar2 = fn_82C3E860;
    pcVar1 = fn_82C3EC38;
  }
  else {
    pcVar4 = fn_82C3DF08;
    pcVar3 = fn_82C3E3E8;
    pcVar2 = fn_82C3EE10;
    pcVar1 = fn_82C3F1B8;
  }
  *(code **)(param_1 + 0x200) = pcVar1;
  *(code **)(param_1 + 0x1fc) = pcVar2;
  *(code **)(param_1 + 0x1f8) = pcVar3;
  *(code **)(param_1 + 500) = pcVar4;
  if (*(int *)(param_1 + 0x118) == 1) {
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      goto LAB_82c2da0c;
    }
    pcVar1 = fn_82C3FC50;
  }
  else {
    pcVar1 = fn_82C439F8;
  }
  *(code **)(param_1 + 0x1dc) = pcVar1;
LAB_82c2da0c:
  *(code **)(param_1 + 0x204) = fn_82C43008;
  *(code **)(param_1 + 0x1f0) = fn_82C435C0;
  return 0;
}

