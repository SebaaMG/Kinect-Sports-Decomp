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
extern int fn_82A2B900();
extern int fn_82A2D260();
extern int fn_82A2D670();
extern int fn_82A2D810();


undefined8 fn_82A2D890(int param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (uint)*(byte *)(param_1 + 0xc9) * 8 + *(int *)(param_1 + 0x30);
  bVar1 = *(byte *)(iVar3 + 6);
  while( true ) {
    uVar4 = (uint)bVar1;
    iVar5 = uVar4 * 8 + *(int *)(param_1 + 0x30);
    if (*(char *)(iVar5 + 4) == '\0') break;
    if (iVar5 == iVar3) {
      fn_82A2D260(param_1,0xffffffffc00000e5);
      return 0xffffffffc00000e5;
    }
    bVar1 = *(byte *)(iVar5 + 6);
  }
  if ((*(byte *)(iVar5 + 7) & 0x40) != 0) {
    if ((*(byte *)(iVar5 + 7) & 8) == 0) {
      uVar2 = fn_82A2D670(param_1,uVar4,iVar5);
    }
    else {
      uVar2 = fn_82A2D810(param_1);
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  *(undefined1 *)(iVar5 + 7) = 0;
  fn_82A2B900(param_1,uVar4,0);
  *param_2 = (uint)bVar1;
  *param_3 = iVar5;
  return 0;
}

