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
extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82359C18();
extern int fn_82F565A0();
extern int fn_82F57B98();
extern unsigned int uStack_58;
extern unsigned int uStack_70;


undefined4 * fn_82F57BF0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  uint auStack_50 [2];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x49) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x49) == '\0');
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar3[4])) {
    auStack_50[0] = *param_2;
    uStack_70 = 0;
    uStack_58 = 0;
    fn_82F565A0(auStack_48,auStack_80);
    fn_82F565A0(auStack_30,auStack_68);
    puVar3 = (undefined4 *)fn_82F57B98(auStack_90,param_1,puVar3,auStack_50);
    puVar3 = (undefined4 *)*puVar3;
    fn_82359C18(auStack_30);
    fn_82359C18(auStack_48);
    fn_82359C18(auStack_68);
    fn_82359C18(auStack_80);
  }
  return puVar3 + 6;
}

