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
extern int fn_82AC87A0();
extern int fn_82AE9340();


bool fn_82AC8B10(int *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  
  cVar3 = '\0';
  uVar4 = 0;
  piVar5 = param_1;
  do {
    piVar5 = piVar5 + 1;
    if (((int *)*piVar5 != (int *)0x0) && ((int *)*piVar5 != param_2)) {
      cVar3 = fn_82AC87A0(param_1,param_2);
      if (cVar3 != '\0') break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 7);
  if (cVar3 == '\0') {
    uVar4 = (uint)param_2[2] >> 7 & 0x7f;
    if ((uVar4 < 0x20) || (bVar2 = true, 0x52 < uVar4)) {
      bVar2 = false;
    }
    if (((bVar2) && ((int *)param_1[7] != (int *)0x0)) && ((int *)param_1[7] != param_2)) {
      cVar3 = '\x01';
    }
  }
  if ((cVar3 == '\0') && (param_1[7] != 0)) {
    cVar3 = fn_82AE9340(param_2);
  }
  if (((cVar3 == '\0') && ((int *)param_1[5] != (int *)0x0)) &&
     (((int *)param_1[5] != param_2 &&
      (((param_2[2] & 0x3f80U) != 0x3000 || (cVar3 = '\x01', (param_2[2] & 0x380000U) == 0)))))) {
    cVar3 = '\0';
  }
  if (cVar3 == '\0') {
    for (puVar1 = (uint *)*param_2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      uVar4 = *puVar1;
      if (((uVar4 & 0x40000000) == 0) || (bVar2 = true, (uVar4 & 0xe000000) != 0)) {
        bVar2 = false;
      }
      if ((((bVar2) && (piVar5 = (int *)param_1[(uVar4 >> 0xd & 0xfff) + 1], piVar5 != (int *)0x0))
          && (piVar5 != param_2)) && (piVar5 != (int *)puVar1[3])) {
        cVar3 = '\x01';
        break;
      }
    }
  }
  return cVar3 == '\0';
}

