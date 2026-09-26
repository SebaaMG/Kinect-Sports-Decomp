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
extern int fn_8302C758();


uint fn_8302CB50(int param_1,int param_2,undefined1 *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  
  *param_3 = 1;
  sVar1 = *(short *)(param_2 + 0xe);
  if (*(char *)(param_2 + 0xc) == '\0') {
    if (sVar1 == 0) {
      *(undefined2 *)(param_2 + 0xe) = 1;
      *(undefined1 *)(param_2 + 0xc) = 1;
      bVar6 = false;
      if (param_4 == (short *)0x0) {
        bVar6 = true;
      }
      else if ((*(byte *)(param_4 + 1) & 0x80) != 0) {
        if ((*(byte *)(param_4 + 1) & 0x40) == 0) {
          bVar6 = (short)(*param_4 + -1) != 0;
          *param_4 = *param_4 + -1;
        }
        else {
          bVar6 = true;
        }
      }
      if (!bVar6) {
        *param_3 = 0;
        return 0;
      }
    }
    else {
      *(short *)(param_2 + 0xe) = sVar1 + -1;
    }
  }
  else {
    uVar5 = (int)sVar1 + 1;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
    if (uVar5 != uVar2) {
      *(short *)(param_2 + 0xe) = (short)uVar5;
      return uVar5 & 0xffff;
    }
    if ((*(byte *)(param_1 + 0x11f) & 4) != 0) {
      uVar2 = (int)sVar1 - 1;
      *(short *)(param_2 + 0xe) = (short)uVar2;
      *(undefined1 *)(param_2 + 0xc) = 0;
      return uVar2 & 0xffff;
    }
    uVar4 = 0;
    *(undefined2 *)(param_2 + 0xe) = 0;
    cVar3 = fn_8302C758(param_1,param_4);
    if (cVar3 == '\0') {
      *param_3 = uVar4;
      return 0;
    }
  }
  return (uint)*(ushort *)(param_2 + 0xe);
}

