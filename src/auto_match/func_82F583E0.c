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
extern int fn_82522ED8();
extern int fn_82830D60();
extern int fn_82F57D98();
extern int fn_82F57E00();


undefined4 * fn_82F583E0(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 *apuStack_50 [20];
  
  puVar2 = *(undefined4 **)(param_2 + 4);
  puVar3 = (uint *)(param_3 + 0xc);
  uVar4 = 1;
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if (param_4 == '\0') {
        uVar4 = -(ulonglong)(*puVar3 < (uint)puVar2[3]) & 1;
      }
      else {
        uVar4 = -((ulonglong)((uint)puVar2[3] < *puVar3) - 1);
      }
      if ((uVar4 & 0xff) == 0) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x21) == '\0');
  }
  apuStack_50[0] = puVar2;
  if ((uVar4 & 0xff) != 0) {
    if (puVar2 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      uVar4 = 1;
      goto LAB_82f58494;
    }
    fn_82830D60(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*puVar3 <= (uint)apuStack_50[0][3]) {
    fn_82F57D98(puVar3,0);
    fn_82522ED8(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82f58494:
  puVar2 = (undefined4 *)fn_82F57E00(apuStack_50,param_2,uVar4,puVar2,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

