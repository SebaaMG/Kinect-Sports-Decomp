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
extern unsigned int *auStack_110;
extern unsigned int *auStack_1f8;
extern int fn_8287CF40();
extern int fn_8287E8A8();
extern int fn_8287E918();
extern int fn_8287EEE8();
extern int fn_8287F8E8();
extern unsigned int uStack_200;


undefined4 * fn_8287FB30(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *apuStack_210 [4];
  uint uStack_200;
  undefined1 auStack_1f8 [232];
  undefined1 auStack_110 [272];
  
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar5[1] + 0x101) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x101) == '\0');
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar5[4])) {
    uVar3 = fn_8287E8A8(auStack_110);
    uStack_200 = *param_2;
    fn_8287EEE8(auStack_1f8,uVar3);
    iVar4 = fn_8287CF40(param_1);
    if ((uint *)(iVar4 + 0x10) != (uint *)0x0) {
      *(uint *)(iVar4 + 0x10) = uStack_200;
      fn_8287EEE8(iVar4 + 0x18,auStack_1f8);
    }
    fn_8287F8E8(apuStack_210,param_1,puVar5,iVar4);
    fn_8287E918(auStack_1f8);
    fn_8287E918(auStack_110);
    puVar5 = apuStack_210[0];
  }
  return puVar5 + 6;
}

