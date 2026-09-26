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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E00();
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82D04F70();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_68;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D056B8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_82CE7EE0(&iStack_70);
  while( true ) {
    while( true ) {
      uVar1 = uStack_68;
      uVar6 = uStack_68 & 0x3fffffff;
      iVar2 = thunk_FUN_82f6ede8(iStack_70,uVar6,param_2,&stack0x00000020);
      if (-1 < iVar2) break;
      uVar6 = (uVar1 & 0x3fffffff) << 1;
      if (uVar6 < 0x100) {
        uVar6 = 0xff;
      }
      iVar3 = uVar6 + 1;
      iVar2 = fn_82CE5410();
      if ((int)(uStack_68 & 0x3fffffff) < iVar3) {
        iVar5 = (uStack_68 & 0x3fffffff) << 1;
        if (iVar5 <= iVar3) {
          iVar5 = iVar3;
        }
        fn_82CE6310(*(undefined4 *)(iVar2 + 0xc),&iStack_70,iVar5,1);
      }
      *(undefined1 *)(uVar6 + iStack_70) = 0;
      iStack_6c = iVar3;
    }
    if (iVar2 < (int)uVar6) break;
    iVar5 = iVar2 + 1;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_68 & 0x3fffffff) < iVar5) {
      iVar4 = (uStack_68 & 0x3fffffff) << 1;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      fn_82CE6310(*(undefined4 *)(iVar3 + 0xc),&iStack_70,iVar4,1);
    }
    *(undefined1 *)(iStack_70 + iVar2) = 0;
    iStack_6c = iVar5;
  }
  fn_82CE7E00(&iStack_70,iVar2);
  fn_82D04F70(param_1,iStack_70,0xffffffffffffffff);
  fn_82CE7E68(&iStack_70);
  return;
}

