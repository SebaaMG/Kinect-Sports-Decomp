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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_828CD830();
extern int fn_828CE1D8();


undefined4 * fn_828CE388(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *apuStack_30 [2];
  uint auStack_28 [4];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  if ((puVar4 == *(undefined4 **)(param_1 + 4)) || (*param_2 < (uint)puVar4[3])) {
    auStack_28[0] = *param_2;
    auStack_28[2] = 0;
    auStack_28[1] = 0;
    uVar3 = fn_828CD830(param_1,auStack_28);
    fn_828CE1D8(apuStack_30,param_1,puVar4,uVar3);
    puVar4 = apuStack_30[0];
    if (auStack_28[2] != 0) {
      fn_822315A0();
    }
  }
  return puVar4 + 4;
}

