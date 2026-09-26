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
extern int fn_82AB15D0();


undefined8 fn_82BC2580(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1[4];
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = param_1 + 7;
    do {
      if (*piVar4 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b88,0xffffffff820e3b18,0x88);
      }
      if (piVar4[0xd] != *(int *)(*piVar4 + 0x20)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b94,0xffffffff820e3b18,0x89);
      }
      if ((piVar4[7] != *(int *)(*piVar4 + 0x10)) && (piVar4[7] != *(int *)(*piVar4 + 0xc))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3bc0,0xffffffff820e3b18,0x8b);
      }
      (**(code **)(*param_1 + 0x14))(param_1);
      iVar1 = param_1[4];
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 1;
  if (1 < param_1[5] + iVar1) {
    piVar4 = param_1 + 8;
    do {
      if (*piVar4 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b88,0xffffffff820e3b18,0x91);
      }
      if (piVar4[0xd] != *(int *)(*piVar4 + 0x20)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b94,0xffffffff820e3b18,0x92);
      }
      if ((piVar4[7] != *(int *)(*piVar4 + 0x10)) && (piVar4[7] != *(int *)(*piVar4 + 0xc))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3bc0,0xffffffff820e3b18,0x94);
      }
      cVar2 = (**(code **)(*param_1 + 0x14))(param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x18))(param_1);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_1[5] + param_1[4]);
  }
  if (param_1[0xed] == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3b74,0xffffffff820e3b18,0x99);
  }
  return 1;
}

