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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_58;
extern int fn_82E39C50();
extern int fn_82E4FE40();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


longlong fn_82E51A98(int *param_1)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ushort *puStack_60;
  ushort *puStack_5c;
  uint auStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puStack_5c = (ushort *)0x0;
  auStack_58[0] = 0;
  lVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0xffffffff8214c730,&puStack_5c,auStack_58);
  if ((-1 < iVar1) && (auStack_58[0] != 0)) {
    (**(code **)(*param_1 + 0xa4))(param_1);
    puStack_60 = puStack_5c;
    for (uVar4 = auStack_58[0]; (uVar4 != 0 && (0x15 < uVar4)); uVar4 = (uVar4 - 0x16) - uVar5) {
      uStack_50 = lbl_8202E618;
      uStack_4c = lbl_8202E61C;
      uStack_48 = lbl_8202E620;
      uStack_44 = lbl_8202E624;
      fn_82E39C50(&uStack_50,&puStack_60);
      puVar3 = puStack_60 + 3;
      uVar5 = (uint)*(byte *)((int)puStack_60 + 5) << 0x18 | (uint)*(byte *)(puStack_60 + 2) << 0x10
              | (uint)*(byte *)((int)puStack_60 + 3) << 8 | (uint)*(byte *)(puStack_60 + 1);
      uVar5 = -(uint)(uVar5 <= uVar4 - 0x16) & uVar5;
      lVar2 = (**(code **)(*param_1 + 0xa0))
                        (param_1,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                         *puStack_60 << 8 | *puStack_60 >> 8,puVar3,uVar5);
      if (lVar2 < 0) break;
      puStack_60 = (ushort *)(uVar5 + (int)puVar3);
    }
  }
  fn_82E4FE40(puStack_5c);
  puStack_5c = (ushort *)0x0;
  if ((int)lVar2 < 0) {
    (**(code **)(*param_1 + 0xa4))(param_1);
  }
  return lVar2;
}

