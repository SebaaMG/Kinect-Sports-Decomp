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
extern int fn_82C19358();
extern int fn_82C1A338();


undefined8 fn_82C1AD70(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x118) == 0) || (*(int *)(iVar1 + 0x28) != 0)) {
    pcVar3 = fn_82C19358;
  }
  else {
    pcVar3 = fn_82C1A338;
  }
  param_1[0x7e] = (int)pcVar3;
  if (*(short *)(iVar1 + 0x22) != 0) {
    iVar2 = 0;
    do {
      iVar5 = iVar2 * 0x6f0;
      iVar4 = *(int *)(iVar1 + 0x140) + iVar5;
      if (*(int *)(iVar1 + 0x118) == 0) {
        if (*(int *)(iVar1 + 0x1c0) == 0) {
          iVar5 = *(int *)(iVar1 + 0x100);
        }
        else {
          iVar5 = *(int *)(iVar1 + 0x100) << (*(uint *)(iVar1 + 0x1c8) & 0x3f);
        }
        *(int *)(iVar4 + 0x34) = iVar2 * iVar5 * 4 + *(int *)(iVar1 + 0x1b4);
        iVar5 = *(int *)(iVar1 + 0x100);
        if (*(int *)(iVar1 + 0x1c0) != 0) {
          iVar5 = iVar5 << (*(uint *)(iVar1 + 0x1c8) & 0x3f);
        }
        *(int *)(iVar4 + 0x94) = iVar2 * iVar5 * 4 + *(int *)(iVar1 + 0x1b4);
      }
      else {
        *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(*(int *)(iVar1 + 0x140) + iVar5 + 4);
        *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(*(int *)(iVar1 + 0x140) + iVar5 + 4);
      }
      sVar6 = (short)iVar2 + 1;
      iVar2 = (int)sVar6;
    } while ((int)sVar6 < (int)(uint)*(ushort *)(iVar1 + 0x22));
  }
  return 0;
}

