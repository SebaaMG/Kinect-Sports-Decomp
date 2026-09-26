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
extern unsigned int *auStack_4c;
extern unsigned int *auStack_70;
extern int fn_8251EE68();
extern int fn_8251F340();
extern int fn_828B02D0();
extern int fn_82F68CC0();


void fn_8251E7D0(int param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *apuStack_80 [4];
  undefined1 auStack_70 [36];
  undefined1 auStack_4c [76];
  
  uVar1 = *param_2;
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  while (*(char *)((int)puVar4 + 0x2d) == '\0') {
    if ((uint)puVar4[3] < uVar1) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puVar5 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if ((puVar5 == *(undefined4 **)(param_1 + 4)) || (uVar1 < (uint)puVar5[3])) {
    uVar2 = fn_828B02D0(auStack_70);
    fn_82F68CC0(auStack_4c,uVar2,0x1c);
    iVar3 = fn_8251F340(param_1);
    if ((uint *)(iVar3 + 0xc) != (uint *)0x0) {
      *(uint *)(iVar3 + 0xc) = uVar1;
      fn_82F68CC0(iVar3 + 0x10,auStack_4c,0x1c);
    }
    fn_8251EE68(apuStack_80,param_1,puVar5,iVar3);
    puVar5 = apuStack_80[0];
  }
  fn_82F68CC0(puVar5 + 4,param_2,0x1c);
  return;
}

