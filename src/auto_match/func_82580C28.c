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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827DDB88();
extern int fn_827DDBF8();
extern int fn_82811438();
extern int fn_82BFE230();
extern unsigned int lbl_821C55F8;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_30;
extern unsigned int uStack_44;
extern unsigned int uStack_68;


undefined4 * fn_82580C28(int param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 auStack_60 [28];
  undefined4 uStack_44;
  code *pcStack_38;
  code *pcStack_34;
  undefined4 uStack_30;
  
  auStack_90[0] = 0;
  fn_82811438(auStack_80,auStack_90,0x10);
  puVar2 = (undefined4 *)
           (**(code **)(*(int *)lbl_83156AA0 + 4))
                     (lbl_83156AA0,0x10,auStack_80,*(undefined4 *)(param_1 + 8));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uStack_30 = *(undefined4 *)(param_1 + 8);
    *puVar2 = &lbl_821C55F8;
    puVar2[1] = 0;
    puVar2[2] = uStack_30;
    lVar4 = 6;
    puVar1 = &uStack_68;
    do {
      puVar3 = puVar1;
      puVar1 = puVar3 + 1;
      *puVar1 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar2[3] = 0;
    pcStack_38 = fn_827DDB88;
    pcStack_34 = fn_827DDBF8;
    uStack_44 = 0x34;
    fn_82BFE230(auStack_60,puVar2 + 1);
  }
  return puVar2;
}

