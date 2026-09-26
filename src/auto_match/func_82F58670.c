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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82522ED8();
extern int fn_82F56878();
extern int fn_82F57B10();
extern int fn_82F57D48();
extern int fn_82F57FD0();
extern int fn_82F58508();
extern unsigned int uStack_40;


undefined4 * fn_82F58670(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [4];
  undefined4 *puStack_4c;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar4[3])) {
    fn_82F56878(auStack_50,auStack_60,auStack_60);
    uStack_40 = *param_2;
    fn_82F57D48(auStack_3c,auStack_50);
    uVar3 = fn_82F57FD0(param_1,&uStack_40);
    fn_82F58508(&puStack_5c,param_1,puVar4,uVar3);
    fn_82F57B10(auStack_58,auStack_3c,*puStack_38);
    fn_82522ED8(puStack_38);
    fn_82F57B10(auStack_58,auStack_50,*puStack_4c);
    fn_82522ED8(puStack_4c);
    puVar4 = puStack_5c;
  }
  return puVar4 + 4;
}

