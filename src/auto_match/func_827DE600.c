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
extern unsigned int *auStack_40;
extern int fn_827DC9B8();
extern int fn_827DE0B0();
extern int fn_827DE488();
extern int fn_827E0250();
extern int fn_827E8720();


int * fn_827DE600(int *param_1,int param_2,uint *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_40 [64];
  
  iVar2 = fn_827E0250(param_2,param_3);
  puVar6 = *(undefined4 **)(param_2 + 4);
  iVar3 = param_2 + 4;
  piVar4 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x44));
  puVar1 = (undefined4 *)*piVar4;
  if ((puVar6 != puVar1) && (puVar6 = *(undefined4 **)piVar4[1], puVar6 != puVar1)) {
    do {
      puVar6 = (undefined4 *)puVar6[1];
      if ((uint)puVar6[2] <= *param_3) {
        if (*param_3 <= (uint)puVar6[2]) {
          fn_827E8720(auStack_40,iVar3,param_4);
          uVar5 = 0;
          *param_1 = (int)puVar6;
          goto LAB_827de6bc;
        }
        puVar6 = (undefined4 *)*puVar6;
        break;
      }
    } while (puVar6 != puVar1);
  }
  if (puVar6 != (undefined4 *)*param_4) {
    fn_827DE0B0(iVar3,puVar6,iVar3,param_4,(undefined4 *)*param_4,1);
  }
  fn_827DC9B8(param_2,param_4,puVar6,iVar2);
  fn_827DE488(param_2);
  uVar5 = 1;
  *param_1 = (int)param_4;
LAB_827de6bc:
  *(undefined1 *)(param_1 + 1) = uVar5;
  return param_1;
}

