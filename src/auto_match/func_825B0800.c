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
extern int fn_825B0D78();
extern int fn_8260B278();
extern int fn_8265C9E0();
extern int fn_827EF640();
extern int fn_827EF998();
extern int fn_827F0298();
extern int fn_827F2D60();
extern int fn_827F3770();
extern int fn_827F4248();
extern int fn_827FA3F0();
extern int fn_827FA400();
extern int fn_82817B50();
extern int fn_82817BC8();
extern int fn_82837AA8();
extern int fn_82850780();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CAA48;


undefined8 fn_825B0800(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar8;
  undefined8 uVar7;
  undefined4 *puVar9;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  uVar4 = fn_827EF640(0x130);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_827F0298(uVar4,*(undefined4 *)(*param_1 + 0x138),0,0);
  }
  if (param_1[3] != 0) {
    fn_825B0D78(*param_1,uVar5,param_1[3],0);
  }
  iVar1 = *param_1;
  iVar2 = param_1[1];
  lVar6 = fn_82837AA8(iVar1);
  if (lVar6 != 0) {
    iStack_50 = 0;
    fn_827FA400(lVar6,1,&iStack_50);
    if (iStack_50 != 0) {
      uVar4 = 0;
      iVar8 = fn_827FA3F0(lVar6);
      if (0 < iVar8) {
        do {
          aiStack_48[0] = 0;
          fn_82817B50(iStack_50,uVar4,aiStack_48);
          if (aiStack_48[0] != 0) {
            iStack_4c = 0;
            fn_82817BC8(aiStack_48[0],&iStack_4c);
            if (iStack_4c != 0) {
              uVar7 = fn_827EF998(uVar5,uVar4 & 0xffff);
              fn_82850780(iVar1,iVar2,iStack_4c,uVar7);
            }
          }
          uVar4 = uVar4 + 1;
          iVar8 = fn_827FA3F0(lVar6);
        } while ((int)uVar4 < iVar8);
      }
    }
  }
  puVar9 = (undefined4 *)fn_8265C9E0(0xc0);
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = param_1[3];
    uVar3 = *(undefined4 *)(iVar1 + 0x138);
    fn_827F4248(puVar9,puVar9 + 8,0,0,0);
    *puVar9 = &lbl_821CAA48;
    fn_827F3770(puVar9 + 8,uVar3);
    puVar9[0x2d] = iVar1;
    puVar9[0x2e] = iVar2;
    fn_8260B278(puVar9);
  }
  fn_827F2D60((double)lbl_8218E8E8,uVar5,puVar9);
  return uVar5;
}

