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
extern int fn_82B1A538();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_3c;
extern unsigned int uStack_4c;


undefined1 fn_82B24030(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  
  iStack_48 = 0;
  iStack_38 = 0;
  uStack_3c = -(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4);
  uStack_4c = -(uint)((*(uint *)(param_3 + 4) & 1) == 0) & *(uint *)(param_3 + 4);
  uVar5 = uStack_3c;
  iVar4 = 0;
  iStack_50 = param_3;
  iStack_40 = param_2;
  do {
    do {
      if ((uStack_4c == 0) || (bVar1 = false, iStack_48 == *(int *)(uStack_4c + 8))) {
        bVar1 = true;
      }
      if (bVar1) {
        if ((uVar5 != 0) && (iVar4 != *(int *)(uVar5 + 8))) {
          return 0;
        }
        return 1;
      }
      piVar2 = (int *)fn_82B1A538(&iStack_50);
    } while ((((param_4 != (int *)0x0) && (*piVar2 == *param_4)) && (piVar2[1] == param_4[1])) &&
            (piVar2[2] == param_4[2]));
    if ((uVar5 == 0) || (bVar1 = false, iVar4 == *(int *)(uVar5 + 8))) {
      bVar1 = true;
    }
  } while (((!bVar1) && (piVar3 = (int *)fn_82B1A538(&iStack_40), *piVar3 == *piVar2)) &&
          ((piVar3[1] == piVar2[1] && (uVar5 = uStack_3c, iVar4 = iStack_38, piVar3[2] == piVar2[2])
           )));
  return 0;
}

