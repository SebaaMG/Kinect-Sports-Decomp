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
extern int fn_82274130();
extern unsigned int lbl_82193CD8;
extern unsigned int lbl_83265988;


void fn_82274250(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  
  iVar5 = lbl_83265988;
  if (lbl_83265988 != 0) {
    uVar2 = *(uint *)(&lbl_82193CD8 + param_2 * 4);
    if (uVar2 != 0) {
      uVar3 = uVar2 >> 3;
      uVar2 = 1 << (uVar2 & 7);
      iVar1 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
      bVar6 = (byte)uVar2;
      if ((uVar2 & 0xff & (uint)*(byte *)(iVar1 + uVar3)) == 0) {
        bVar6 = *(byte *)(iVar1 + uVar3) | bVar6;
      }
      else {
        bVar6 = *(byte *)(iVar1 + uVar3) & ~bVar6;
      }
      *(byte *)(iVar1 + uVar3) = bVar6;
    }
    uVar2 = *(uint *)(&lbl_82193CD8 + param_2 * 4);
    if ((uVar2 == 0) ||
       (cVar4 = '\x01',
       ((uint)*(byte *)(*(int *)(*(int *)(iVar5 + 0xf0) + 8) + (uVar2 >> 3)) & 1 << (uVar2 & 7)) ==
       0)) {
      cVar4 = '\0';
    }
    fn_82274130(param_1,param_2,cVar4 + '\x02');
    return;
  }
  return;
}

