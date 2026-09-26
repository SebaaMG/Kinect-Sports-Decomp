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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A3F7B8();
extern int fn_82A3F820();
extern int fn_82F68CC0();


ulonglong fn_82A3FA30(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  do {
    uVar1 = fn_82A3F820(*(undefined4 *)(iVar3 + *param_1));
    if (uVar1 != 0) break;
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar5 < (uint)param_1[1]);
  if ((uVar5 == param_1[1]) &&
     (puVar2 = (undefined4 *)fn_8265C940(0xc,0x24970000), puVar2 != (undefined4 *)0x0)) {
    iVar3 = fn_82A3F7B8(puVar2,param_2,param_3,param_1[2]);
    if (-1 < iVar3) {
      puVar4 = (undefined4 *)
               fn_8265C940(((ulonglong)(uint)param_1[1] + 1 & 0x3fffffff) << 2,0x24970000);
      if (puVar4 != (undefined4 *)0x0) {
        fn_82F68CC0(puVar4 + 1,*param_1,param_1[1] << 2);
        fn_8265C990(*param_1,0x24970000);
        *param_1 = (int)puVar4;
        *puVar4 = puVar2;
        uVar5 = 0;
        if ((uint)param_1[2] < 0x20) {
          param_1[2] = param_1[2] << 1;
        }
        uVar1 = fn_82A3F820(puVar2);
        param_1[1] = param_1[1] + 1;
        goto LAB_82a3fb50;
      }
      fn_8265C990(*puVar2,0x24970000);
      *puVar2 = 0;
    }
    fn_8265C990(puVar2,0x24970000);
  }
LAB_82a3fb50:
  if ((uVar1 & 0xffffffff) != 0) {
    *param_4 = *(undefined4 *)(uVar5 * 4 + *param_1);
  }
  return uVar1;
}

