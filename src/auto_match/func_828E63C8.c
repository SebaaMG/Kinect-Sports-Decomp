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
extern int fn_828B5650();


undefined4 * fn_828E63C8(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  cVar4 = *(char *)((int)puVar5 + 0x1d);
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (cVar4 == '\0') {
    if (((uint)puVar5[3] < *param_2) ||
       (((uint)puVar5[3] <= *param_2 &&
        (cVar4 = fn_828B5650(puVar5 + 4,param_2 + 1), cVar4 != '\0')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      puVar1 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    else {
      puVar1 = (undefined4 *)*puVar5;
    }
    puVar3 = puVar5;
    puVar5 = puVar1;
    cVar4 = *(char *)((int)puVar1 + 0x1d);
  }
  return puVar3;
}

