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
extern unsigned int fStack_34;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int lbl_8216C698;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


undefined8 fn_82FA8BA8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  if (*(int *)(param_1 + 0x20) == 0) {
    uStack_30 = *param_2;
    uStack_2c = param_2[1];
    puVar2 = (undefined4 *)(param_1 + 0x18);
    uStack_3c = 0x4000000;
    uStack_38 = lbl_821AAD20;
    fStack_34 = lbl_8216C698;
    uStack_28 = 1;
    puStack_40 = puVar2;
    iVar1 = fn_82FF59A8(lbl_832642F4,&puStack_40,1,0);
    *(int *)(param_1 + 0x20) = iVar1;
    *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 0x40;
    if (iVar1 == 0) {
      (**(code **)*puVar2)((double)fStack_34,puVar2,uStack_3c);
    }
  }
  else {
    fn_82FF5400((double)lbl_8216C698,lbl_832642F4,*(int *)(param_1 + 0x20),0x4000000,
                      0xffffffff82170000,*param_2,param_2[1],0);
  }
  return 1;
}

