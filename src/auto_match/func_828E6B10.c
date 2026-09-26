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


int * fn_828E6B10(int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = *(undefined4 **)(param_2 + 4);
  cVar4 = *(char *)((int)puVar5[1] + 0x1d);
  puVar3 = puVar5;
  puVar6 = (undefined4 *)puVar5[1];
  while (cVar4 == '\0') {
    if (((uint)puVar6[3] < *param_3) ||
       (((uint)puVar6[3] <= *param_3 &&
        (cVar4 = fn_828B5650(puVar6 + 4,param_3 + 1), cVar4 != '\0')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      puVar1 = (undefined4 *)puVar6[2];
      puVar6 = puVar3;
    }
    else {
      if (*(char *)((int)puVar5 + 0x1d) != '\0') {
        if ((*param_3 < (uint)puVar6[3]) ||
           ((*param_3 <= (uint)puVar6[3] &&
            (cVar4 = fn_828B5650(param_3 + 1,puVar6 + 4), cVar4 != '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          puVar5 = puVar6;
        }
      }
      puVar1 = (undefined4 *)*puVar6;
    }
    puVar3 = puVar6;
    puVar6 = puVar1;
    cVar4 = *(char *)((int)puVar1 + 0x1d);
  }
  if (*(char *)((int)puVar5 + 0x1d) == '\0') {
    puVar6 = (undefined4 *)*puVar5;
  }
  else {
    puVar6 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  }
  cVar4 = *(char *)((int)puVar6 + 0x1d);
  while (cVar4 == '\0') {
    if ((*param_3 < (uint)puVar6[3]) ||
       ((*param_3 <= (uint)puVar6[3] &&
        (cVar4 = fn_828B5650(param_3 + 1,puVar6 + 4), cVar4 != '\0')))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      puVar1 = (undefined4 *)*puVar6;
      puVar5 = puVar6;
    }
    else {
      puVar1 = (undefined4 *)puVar6[2];
    }
    puVar6 = puVar1;
    cVar4 = *(char *)((int)puVar1 + 0x1d);
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar5;
  return param_1;
}

