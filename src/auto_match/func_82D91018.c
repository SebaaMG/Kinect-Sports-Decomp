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
extern unsigned int *auStack_50;
extern int fn_82CE5410();
extern int fn_82DBA1E0();
extern int fn_83088518();
extern unsigned int iStack0000001c;
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82D91018(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iStack0000001c;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar1 = *(uint *)(param_1 + 0x338);
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0x80000000;
    iStack0000001c = param_2;
    piVar2 = (int *)fn_82CE5410();
    uStack_58 = uVar1 | 0x80000000;
    iStack_60 = *piVar2;
    *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + iStack_60;
    iStack_54 = iStack_60;
    fn_82DBA1E0(*(undefined4 *)(param_1 + 0x78),&stack0x0000001c,1);
    uStack_48 = *(undefined8 *)(iStack0000001c + 0x38);
    uStack_40 = *(undefined8 *)(iStack0000001c + 0x40);
    uStack_38 = *(undefined8 *)(iStack0000001c + 0x48);
    (**(code **)(**(int **)(param_1 + 0x58) + 0x14))
              (*(int **)(param_1 + 0x58),param_2 + 0x24,auStack_50,&iStack_60,uStack_48,
               iStack0000001c + 0x30);
    if (0 < (int)uStack_5c) {
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x7c) + 8;
      if ((ulonglong)*(uint *)(param_1 + 0x7c) == 0) {
        lVar4 = 0;
      }
      fn_83088518(*(undefined4 *)(param_1 + 100),iStack_60,uStack_5c,lVar4);
    }
    iVar3 = iStack_54;
    uStack_5c = -(uint)(iStack_60 != iStack_54) & uStack_5c;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar3;
    iVar3 = fn_82CE5410();
    uStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_60,uStack_58 & 0x3fffffff,8);
    }
  }
  return;
}

