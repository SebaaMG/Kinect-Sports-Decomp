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
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_826F6FA8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82711940(int param_1)

{
  char cVar2;
  int iVar1;
  undefined8 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  if (**(int **)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
    cVar2 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xc) + 0x44))
                      ((int *)**(undefined4 **)(param_1 + 0xc),&uStack_30,0xffffffff8200ea00);
    if (cVar2 == '\0') {
      fn_82273CD8(&uStack_30,3);
      dStack_28 = lbl_82005710;
    }
    iVar1 = fn_826F6FA8(**(undefined4 **)(param_1 + 0xc),9999);
    if ((iVar1 == 0) || (uVar3 = 1, dStack_28 != lbl_82002C40)) {
      uVar3 = 0;
    }
    fn_82273C88(&uStack_30);
  }
  return uVar3;
}

