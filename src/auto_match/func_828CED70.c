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
extern unsigned int *auStack_34;
extern unsigned int *auStack_58;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_8265CA20();
extern int fn_828A6130();
extern int fn_828CCC38();
extern int fn_828CCD48();
extern int fn_828CE118();
extern int fn_828CE6D8();
extern int fn_828CEAD0();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined4 * fn_828CED70(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_70 [4];
  undefined4 *puStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  undefined4 *puStack_54;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [4];
  undefined4 *puStack_30;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[3])) {
    uVar3 = *param_2;
    uStack_60 = 0;
    uStack_5c = 0;
    fn_828CCD48(auStack_58,auStack_70,auStack_70);
    uStack_3c = uStack_60;
    uStack_38 = uStack_5c;
    uStack_40 = uVar3;
    fn_828CCD48(auStack_34,auStack_70,auStack_70);
    fn_828CE118(auStack_34,auStack_58);
    lVar4 = fn_828CCC38(param_1);
    fn_828CE6D8(param_1 + 0xd,lVar4 + 0xc,&uStack_40);
    fn_828CEAD0(&puStack_6c,param_1,puVar5,lVar4);
    fn_828A6130(auStack_68,auStack_34,*puStack_30);
    fn_8265CA20(puStack_30);
    fn_828A6130(auStack_68,auStack_58,*puStack_54);
    fn_8265CA20(puStack_54);
    puVar5 = puStack_6c;
  }
  return puVar5 + 4;
}

