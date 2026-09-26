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
extern unsigned int *auStack_78;
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8305D680();
extern int fn_8305D6B8();
extern int fn_8305D830();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_83066928();
extern int fn_83068418();
extern unsigned int lbl_8217E6BC;


undefined8
fn_83069D38(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar6;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar7;
  undefined4 *apuStack_80 [2];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [96];
  
  cVar6 = fn_83068418();
  if ((cVar6 == '\0') && ((*(int *)(param_2 + 0x34) == 0 || (*(int *)(param_2 + 0x30) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x10);
    fn_8305D6B8(uVar1,auStack_78);
    bVar2 = true;
    lVar7 = 0;
    iVar4 = fn_8305D680(uVar1);
    if (0 < iVar4) {
      do {
        fn_8305D830(uVar1,lVar7,auStack_60);
        iVar4 = fn_83066928(param_1,auStack_60,param_3);
        if (iVar4 == 5) {
          bVar2 = false;
          break;
        }
        lVar7 = lVar7 + 1;
        iVar4 = fn_8305D680(uVar1);
      } while ((int)lVar7 < iVar4);
    }
    if (bVar2) {
      puVar5 = (undefined4 *)fn_8265C9E0(0x48);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        fn_8305F2E8(puVar5);
        *puVar5 = &lbl_8217E6BC;
      }
      apuStack_80[0] = puVar5;
      fn_8305E0F8(puVar5,param_5 + 0x68);
      fn_8305EC98(puVar5,param_3);
      puVar5[0x11] = param_2;
      fn_8257A9F0(param_5 + 0x98,apuStack_80);
    }
    uVar3 = 1;
  }
  return uVar3;
}

