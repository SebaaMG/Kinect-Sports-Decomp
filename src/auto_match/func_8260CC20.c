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
extern unsigned int *auStack_180;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_1f0;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8257EB18();
extern int fn_8259BB38();
extern int fn_82665110();
extern int fn_827D9698();
extern int fn_827D96A0();
extern int fn_827D9FB0();
extern int fn_827DC748();
extern int fn_82811400();
extern int fn_82F64068();
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_1fc;
extern unsigned int uStack_230;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_8260CC20(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar5;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar6;
  longlong lVar7;
  undefined4 uStack_230;
  int aiStack_22c [7];
  undefined4 *******apppppppuStack_210 [5];
  uint uStack_1fc;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [64];
  char acStack_140 [320];
  
  lVar7 = 0;
  uStack_230 = 0;
  iVar5 = fn_827D9698(param_2);
  if (((iVar5 == 0x11) || (iVar5 == 0x6a)) || (iVar5 == 0xb)) {
    fn_82230300(apppppppuStack_210,0,0);
    uVar3 = fn_827D96A0(param_2);
    fn_8257EB18();
    fn_82F64068(auStack_1f0,0x10,0xf,0xffffffff821c557c,uVar3);
    iVar5 = fn_82665110(auStack_1f0,0,acStack_140,0x104);
    if (iVar5 < 0) {
      iVar5 = thunk_FUN_82a2b798();
    }
    else {
      pcVar6 = acStack_140;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      fn_82230360(apppppppuStack_210,acStack_140,pcVar6 + (-1 - (int)acStack_140));
      iVar5 = 0;
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)lbl_83156AA0;
      uVar3 = fn_82811400(auStack_1e0,4);
      lVar4 = (**(code **)(iVar5 + 0xc))(lbl_83156AA0,0x68,uVar3);
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uStack_230 = *(undefined4 *)(param_1 + 0x44);
        aiStack_22c[2] = 0;
        aiStack_22c[3] = 0;
        aiStack_22c[1] = 0xffffffff;
        aiStack_22c[0] = 1;
        if (uStack_1fc < 0x10) {
          apppppppuStack_210[0] = apppppppuStack_210;
        }
        fn_8256D3A8(auStack_1c0,apppppppuStack_210[0]);
        lVar7 = 1;
        uVar3 = fn_827D9FB0(lVar4,auStack_1c0,&uStack_230,aiStack_22c,aiStack_22c + 1,
                                  aiStack_22c + 3,aiStack_22c + 2);
      }
      if (lVar7 != 0) {
        fn_8256D798(auStack_1c0,1,0);
      }
      uVar3 = fn_827DC748(*(undefined4 *)(param_1 + 0x40),uVar3);
      fn_82230300(apppppppuStack_210,1,0);
      return uVar3;
    }
    fn_82230300(apppppppuStack_210,1,0);
  }
  uStack_230 = fn_827D96A0(param_2);
  fn_8259BB38(aiStack_22c,param_1 + 0x140,&uStack_230);
  iVar5 = aiStack_22c[0];
  if (aiStack_22c[0] == *(int *)(param_1 + 0x144)) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)lbl_83156AA0;
    uVar3 = fn_82811400(auStack_1e0,4);
    lVar4 = (**(code **)(iVar2 + 0xc))(lbl_83156AA0,0x68,uVar3);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      aiStack_22c[2] = *(undefined4 *)(param_1 + 0x44);
      uStack_230 = 0;
      aiStack_22c[0] = 0;
      aiStack_22c[1] = 0xffffffff;
      aiStack_22c[3] = 1;
      fn_8256D3A8(auStack_180,*(undefined4 *)(iVar5 + 0xc));
      lVar7 = 2;
      uVar3 = fn_827D9FB0(lVar4,auStack_180,aiStack_22c + 2,aiStack_22c + 3,aiStack_22c + 1,
                                aiStack_22c,&uStack_230);
    }
    if (lVar7 != 0) {
      fn_8256D798(auStack_180,1,0);
    }
    uVar3 = fn_827DC748(*(undefined4 *)(param_1 + 0x40),uVar3);
  }
  return uVar3;
}

