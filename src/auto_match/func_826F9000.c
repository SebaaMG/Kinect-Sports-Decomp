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
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_826F9000(int *param_1,char param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *(char *)(param_1 + 1) = param_2;
  if (param_2 == '\0') {
    fn_8268CC00(&uStack_40);
    piVar2 = (int *)*param_1;
    iVar3 = piVar2[8];
    if (iVar3 != 0) {
      fn_8268CC00(&uStack_60);
      fn_8269A240(iVar3,&uStack_60);
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
    }
    iVar3 = (**(code **)(*piVar2 + 0x40))(piVar2);
    uStack_6c = *(undefined4 *)(iVar3 + 0x95c);
    uStack_70 = *(undefined4 *)(iVar3 + 0x958);
    fn_8268D008(&uStack_40,&fStack_68,&uStack_70);
    fVar1 = (float)piVar2[0x16];
    param_1[6] = (int)((float)piVar2[0x13] - fStack_68);
    param_1[7] = (int)(fVar1 - fStack_64);
  }
  return;
}

