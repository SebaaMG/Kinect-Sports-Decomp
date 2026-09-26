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
extern unsigned int *auStack_48;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8265CA20();
extern int fn_8288C2E0();
extern int fn_8288E4B0();
extern int fn_828B22F0();
extern int fn_828C8F90();
extern int fn_828C92E8();
extern int fn_828C9BD0();
extern int fn_828C9C30();
extern int fn_828C9CF0();
extern int fn_828CA708();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


undefined4 * fn_828CA8B8(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_a0 [4];
  undefined4 *apuStack_9c [3];
  undefined1 auStack_90 [4];
  undefined4 *puStack_8c;
  undefined4 auStack_80 [4];
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint auStack_60 [2];
  undefined1 auStack_58 [4];
  undefined4 *puStack_54;
  undefined4 auStack_48 [4];
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x49) == '\0') {
    puVar1 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar5 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x49) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[4])) {
    uVar3 = *param_2;
    fn_828C92E8(auStack_90,auStack_a0,auStack_a0);
    fn_8288C2E0(auStack_80,auStack_a0);
    auStack_60[0] = uVar3;
    fn_828C92E8(auStack_58,auStack_a0,auStack_a0);
    fn_828C9C30(auStack_58,auStack_90);
    fn_828C9BD0(auStack_48,auStack_80);
    uStack_38 = uStack_70;
    uStack_30 = uStack_68;
    lVar4 = fn_828C8F90(param_1);
    if (lVar4 + 0x10 != 0) {
      fn_828C9CF0(lVar4 + 0x10,auStack_60);
    }
    fn_828CA708(apuStack_9c,param_1,puVar5,lVar4);
    fn_828B22F0(auStack_48);
    fn_8265CA20(auStack_48[0]);
    fn_8288E4B0(apuStack_9c,auStack_58,*puStack_54);
    fn_8265CA20(puStack_54);
    fn_828B22F0(auStack_80);
    fn_8265CA20(auStack_80[0]);
    fn_8288E4B0(apuStack_9c,auStack_90,*puStack_8c);
    fn_8265CA20(puStack_8c);
    puVar5 = apuStack_9c[0];
  }
  return puVar5 + 6;
}

