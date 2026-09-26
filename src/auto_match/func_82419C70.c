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
extern int fn_82250A18();
extern int fn_82417F58();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832975B0;


undefined8 fn_82419C70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = fn_82417F58();
  if (iVar1 != 0) {
    if (param_1[0xb8] != 0) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if ((*(char *)(iVar2 + 4) == '\0') && (iVar2 = 0, *(int *)(iVar1 + 0x24) != 0))
      goto LAB_82419cd8;
    }
    iVar2 = 1;
  }
LAB_82419cd8:
  if (((((param_1[0xc] == 0) && (param_1[0xac] == 0)) && (lbl_821916FC < (float)param_1[0xb9])) &&
      ((float)param_1[0xba] == lbl_821CC160)) && ((param_1[0xa7] == 0 || (param_1[0xa7] == 6)))) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      iVar1 = *(int *)(*(int *)(*(int *)(*param_1 + 0xd4) + 0x18) + 0xc);
    }
    else {
      iVar1 = 0;
    }
    if (((iVar1 == 0) && (iVar2 != 0)) &&
       ((param_1[0x9f] == 0 &&
        (iVar1 = (**(code **)(*(int *)param_1[1] + 0x40))
                           ((int *)param_1[1],
                            (ulonglong)(uint)param_1[6] * 0x1ac + (ulonglong)(uint)param_1[2]),
        iVar1 != 0)))) {
      return 1;
    }
  }
  return 0;
}

