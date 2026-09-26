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
extern int fn_825089A0();
extern int fn_8288A9B8();


void fn_8288B060(int param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *apuStack_40 [16];
  
  uVar6 = 0;
  do {
    puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x128))[1];
    cVar1 = *(char *)((int)puVar4 + 0x15);
    puVar5 = *(undefined4 **)(param_1 + 0x128);
    while (cVar1 == '\0') {
      if ((uint)puVar4[3] < uVar6) {
        puVar2 = (undefined4 *)puVar4[2];
        puVar4 = puVar5;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar5 = puVar4;
      puVar4 = puVar2;
      cVar1 = *(char *)((int)puVar2 + 0x15);
    }
    if ((puVar5 == *(undefined4 **)(param_1 + 0x128)) || (uVar6 < (uint)puVar5[3])) {
      piVar3 = (int *)fn_825089A0();
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x24))(piVar3,0x18,0);
      *puVar4 = *(undefined4 *)(param_1 + 0x128);
      puVar4[1] = *(undefined4 *)(param_1 + 0x128);
      puVar4[2] = *(undefined4 *)(param_1 + 0x128);
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined1 *)((int)puVar4 + 0x15) = 0;
      if (puVar4 + 3 != (uint *)0x0) {
        puVar4[3] = uVar6;
        *(undefined1 *)(puVar4 + 4) = 0;
      }
      fn_8288A9B8(apuStack_40,param_1 + 0x124,puVar5,puVar4);
      puVar5 = apuStack_40[0];
    }
    uVar6 = uVar6 + 1;
    *(undefined1 *)(puVar5 + 4) = param_2;
  } while (uVar6 < 0x1b);
  return;
}

