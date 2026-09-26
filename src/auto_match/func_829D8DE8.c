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
extern int fn_829D47B0();
extern int fn_829D6C98();
extern int fn_82A28E60();
extern int fn_82A2B218();
extern int fn_82A2B288();
extern int fn_8314216C();
extern unsigned int lbl_832179FC;
extern unsigned int uStack_50;


/* WARNING: Type propagation algorithm not settling */

void fn_829D8DE8(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_50;
  int aiStack_4c [3];
  longlong alStack_40 [8];
  
  iVar4 = lbl_832179FC + 0x8f4e0;
  *(undefined4 *)(lbl_832179FC + 0x8f500) = 0;
  lVar2 = fn_829D6C98(iVar4);
  fn_829D47B0(aiStack_4c,0x32000);
  iVar1 = aiStack_4c[0];
  if (aiStack_4c[0] != 0) {
    while (lVar2 != 0) {
      alStack_40[0] = 0;
      uStack_50 = 0;
      aiStack_4c[1] = 0;
      aiStack_4c[0] = 0;
      iVar3 = fn_82A2B218(lVar2,alStack_40,0,aiStack_4c + 1,0);
      if ((iVar3 < 0) || (alStack_40[0] == 0)) {
        uStack_50 = 0x32000;
        iVar3 = fn_8314216C(lVar2,aiStack_4c,iVar1,&uStack_50,0);
        if ((iVar3 != 0) || (aiStack_4c[0] == 0)) {
          aiStack_4c[0] = -0x80000000;
          uStack_50 = 1;
        }
        fn_82A2B288(lVar2,aiStack_4c[0],iVar1,uStack_50,0);
      }
      lVar2 = fn_829D6C98(iVar4);
    }
    fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,iVar1);
  }
  return;
}

