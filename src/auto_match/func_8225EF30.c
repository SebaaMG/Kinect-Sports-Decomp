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
extern int fn_822AC640();
extern int fn_8265CA20();
extern int fn_82829C48();


undefined4 * fn_8225EF30(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 *apuStack_50 [20];
  
  puVar2 = *(undefined4 **)(param_2 + 4);
  bVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = -(*(uint *)(param_3 + 0xc) < (uint)puVar2[3]) & 1;
      if (bVar3 == 0) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  apuStack_50[0] = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      bVar3 = 1;
      goto LAB_8225efc0;
    }
    fn_82829C48(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(uint *)(param_3 + 0xc) <= (uint)apuStack_50[0][3]) {
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_8225efc0:
  puVar2 = (undefined4 *)fn_822AC640(apuStack_50,param_2,bVar3,puVar2,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

