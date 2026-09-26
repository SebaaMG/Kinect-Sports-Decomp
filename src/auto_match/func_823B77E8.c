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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_823B97C0();


void fn_823B77E8(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_50 [8];
  uint auStack_48 [18];
  
  puVar3 = *(undefined4 **)(param_1 + 0x88);
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 0x88))[1];
  while( true ) {
    if (*(char *)((int)puVar5 + 0x19) != '\0') break;
    if ((uint)puVar5[3] < param_3) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar3 = puVar5;
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  if ((puVar3 == *(undefined4 **)(param_1 + 0x88)) || (param_3 < (uint)puVar3[3])) {
    auStack_48[2] = 0;
    auStack_48[1] = 0;
    auStack_48[0] = param_3;
    puVar3 = (undefined4 *)fn_823B97C0(auStack_50,param_1 + 0x84,puVar3,auStack_48);
    puVar3 = (undefined4 *)*puVar3;
    if (auStack_48[2] != 0) {
      fn_822315A0(auStack_48[2]);
    }
  }
  iVar1 = param_2[1];
  uVar2 = *param_2;
  uVar6 = 0;
  iVar7 = 0;
  if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
    uVar6 = uVar2;
    iVar7 = iVar1;
  }
  iVar1 = puVar3[5];
  puVar3[5] = iVar7;
  puVar3[4] = uVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

