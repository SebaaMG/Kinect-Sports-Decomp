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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_82BA02A8();
extern int fn_82BF6FC0();
extern int fn_82BF7098();
extern int fn_82F6D460();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


undefined8 fn_82BECE78(int param_1,int param_2)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 auStack_38 [2];
  undefined8 auStack_30 [6];
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar3 = *(int *)(param_2 + 0xc);
    uStack_40 = 0;
    iVar2 = fn_82BF6FC0(param_2,iVar3,&uStack_40,4);
    if ((iVar2 != 0) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc),param_2),
       iVar2 != 0)) {
      iStack_3c = (*(int *)(param_2 + 0xc) - iVar3) + -4;
      fn_82BF7098(param_2,iVar3,&iStack_3c,4);
      auStack_30[0] = fn_82BA02A8(*(undefined8 *)(param_1 + 0x10));
      iVar3 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),auStack_30,8);
      if (iVar3 != 0) {
        auStack_38[0] = *(undefined4 *)(param_1 + 0x18);
        iVar3 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),auStack_38,4);
        if (iVar3 != 0) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = fn_82F6D460(*(int *)(param_1 + 0x1c),0x104);
          }
          if ((uVar1 & 0xffffffff) != 0x104) {
            uStack_40 = (undefined4)uVar1;
            iVar3 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),&uStack_40,4);
            if ((iVar3 != 0) &&
               (((uVar1 & 0xffffffff) == 0 ||
                (iVar3 = fn_82BF6FC0(param_2,*(undefined4 *)(param_2 + 0xc),
                                           *(undefined4 *)(param_1 + 0x1c),uVar1), iVar3 != 0)))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

