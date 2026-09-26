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
extern unsigned int *auStack_50;
extern int fn_827EB788();
extern int fn_827EDAD0();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_8285ABD8();
extern unsigned int lbl_821AAD20;


undefined8
fn_8285D488(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_50 [80];
  
  iVar1 = fn_8285ABD8(param_4,param_2);
  if (iVar1 != 0) {
    fn_82810328(param_3 + 4,*(undefined4 *)(param_4 + 0x14),auStack_50);
    dVar3 = (double)fn_82810280(param_5,auStack_50);
    if ((double)lbl_821AAD20 <= dVar3) {
      iVar1 = fn_827EB788(param_1,(double)*(float *)(param_4 + 0x10),param_6);
      if ((iVar1 != 0) && (iVar1 = 2, 2 < *(ushort *)(param_4 + 0x18))) {
        do {
          iVar2 = fn_827EDAD0(param_1,param_6);
          if (iVar2 != 0) {
            return 2;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(param_4 + 0x18));
      }
      return 1;
    }
  }
  return 0;
}

