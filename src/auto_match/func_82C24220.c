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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern unsigned int iStack_4c;


ulonglong fn_82C24220(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 auStack_48 [18];
  
  iStack_4c = 0;
  auStack_48[0] = 0;
  auStack_50[0] = 0;
  if (param_1 == 0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar4 = fn_82C10F68(*(undefined4 *)(iVar1 + 0x94),auStack_48,&iStack_4c,auStack_50);
    if (iVar4 == -0x7fafffea) {
      fn_82C11038(*(undefined4 *)(iVar1 + 0x94),auStack_48[0]);
      uVar3 = 0;
    }
    else {
      do {
        if ((*(int *)(iStack_4c + 0x50) != 0) &&
           (uVar2 = 1 << (param_2 & 0x3f),
           (*(uint *)(((param_2 >> 5 & 7) + 0x15) * 4 + iStack_4c) & uVar2) == uVar2)) {
          if ((param_3 == 0) || (param_3 == 3)) {
            *(undefined4 *)(iStack_4c + 4) = 0;
          }
          else {
            *(undefined4 *)(iStack_4c + 4) = 1;
          }
          *(undefined4 *)(iStack_4c + 8) = 0;
          *(undefined4 *)(iStack_4c + 0x10) = 0;
          *(undefined4 *)(iStack_4c + 0x14) = 0;
          *(undefined4 *)(iStack_4c + 0x1c) = 0;
          *(undefined1 *)(iStack_4c + 0x20) = 0;
          *(undefined4 *)(iStack_4c + 0x24) = 0;
          *(undefined4 *)(iStack_4c + 0x28) = 0;
          *(undefined4 *)(iStack_4c + 0x4c) = 1;
        }
        iVar4 = fn_82C10FD0(*(undefined4 *)(iVar1 + 0x94),auStack_48[0],&iStack_4c,auStack_50);
      } while (iVar4 != -0x7fafffea);
      uVar3 = fn_82C11038(*(undefined4 *)(iVar1 + 0x94),auStack_48[0]);
      if ((uVar3 & 0xffffffff) == 0x80500016) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

