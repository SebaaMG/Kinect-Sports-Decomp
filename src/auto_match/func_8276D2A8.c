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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_8267BE38();
extern int fn_827673B0();
extern int fn_8276AB50();
extern int fn_8276B860();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8276D2A8(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  uStack_68 = 0;
  uStack_60 = 0;
  uVar6 = 0;
  uStack_64 = 0;
  uVar8 = 0;
  bVar1 = false;
  uVar7 = 0;
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar6 = 0;
    do {
      iVar5 = param_2[0xe] + iVar2;
      puVar4 = (undefined1 *)(*(int *)param_2[0xc] + iVar5);
      if (bVar1) {
        if (uVar8 == CONCAT11(puVar4[1],*puVar4) - 1) goto LAB_8276d334;
        uStack_6a = (undefined2)uVar8;
        uStack_6c = uVar6;
        fn_8276AB50(&uStack_68,&uStack_6c);
        bVar1 = false;
      }
      else {
        bVar1 = true;
        uVar6 = CONCAT11(puVar4[1],*puVar4);
LAB_8276d334:
        uVar7 = uVar7 + 1;
        iVar2 = iVar2 + 8;
        puVar4 = (undefined1 *)(*(int *)param_2[0xc] + iVar5);
        uVar8 = (uint)CONCAT11(puVar4[1],*puVar4);
      }
      uVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (uVar7 < uVar3);
  }
  if (bVar1) {
    uStack_6a = (undefined2)uVar8;
    uStack_6c = uVar6;
    fn_8276AB50(&uStack_68,&uStack_6c);
  }
  fn_827673B0(&uStack_68,0,uStack_64,0);
  fn_8276B860(param_1,&uStack_68);
  fn_8267BE38(uStack_68);
  return param_1;
}

