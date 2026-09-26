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


undefined4 * fn_828E3AF0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x1d) != '\0') {
    return puVar4;
  }
  puVar1 = (undefined4 *)puVar4[1];
  do {
    if ((int)puVar1[3] < *param_2) {
LAB_828e3b6c:
      bVar3 = true;
    }
    else {
      if ((int)puVar1[3] <= *param_2) {
        uVar5 = 0;
        if (*(char *)(param_2 + 1) != '\0') {
          if (*(char *)(puVar1 + 4) == '\0') {
            uVar5 = 1;
          }
          else {
            uVar5 = ((~(ulonglong)(uint)(param_2[2] ^ puVar1[5]) & 0xffffffff) >> 0x1f) +
                    (ulonglong)((uint)param_2[2] <= (uint)puVar1[5]) & 1;
          }
        }
        if (uVar5 != 0) goto LAB_828e3b6c;
      }
      bVar3 = false;
    }
    if (bVar3) {
      puVar2 = (undefined4 *)puVar1[2];
    }
    else {
      puVar2 = (undefined4 *)*puVar1;
      puVar4 = puVar1;
    }
    puVar1 = puVar2;
    if (*(char *)((int)puVar2 + 0x1d) != '\0') {
      return puVar4;
    }
  } while( true );
}

