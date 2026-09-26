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
extern int fn_8260D428();


undefined4 * fn_828C2090(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x31);
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (cVar1 == '\0') {
    puVar4 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar4 = (undefined4 *)*param_2;
    }
    iVar3 = fn_8260D428(puVar5 + 3,0,puVar5[7],puVar4,param_2[4]);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x31);
  }
  return puVar2;
}

