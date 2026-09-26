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
#define TBLr 0
extern unsigned int *auStack_80;
extern unsigned int iStack_54;
extern unsigned int iStack_64;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_82D3DF08(int param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 auStack_80 [16];
  int *piStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int *piStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  uVar5 = 0;
  if (*(int *)(param_2 + 0x24) == 0) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar3 = 0;
      do {
        if ((0xff < (uVar5 & 0xffffffff)) ||
           ((1 << ((uint)uVar5 & 0x1f) &
            *(uint *)(((int)((uVar5 & 0xffffffff) >> 5) + 0x14) * 4 + param_1)) != 0)) {
          uStack_68 = *(undefined4 *)(param_3 + 8);
          piStack_70 = *(int **)(*(int *)(param_1 + 0x18) + iVar3);
          uStack_6c = (uint)uVar5;
          iStack_64 = param_3;
          (**(code **)(*piStack_70 + 0x24))(piStack_70,param_2,&piStack_70,param_4);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x10;
      } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      if (((0xff < (uVar5 & 0xffffffff)) ||
          ((1 << ((uint)uVar5 & 0x1f) &
           *(uint *)(((int)((uVar5 & 0xffffffff) >> 5) + 0x14) * 4 + param_1)) != 0)) &&
         (pcVar4 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x24))
                                     (auStack_80,*(undefined4 **)(param_2 + 0x24),param_2,param_1,
                                      param_1 + 0x10,uVar5), *pcVar4 != '\0')) {
        uStack_58 = *(undefined4 *)(param_3 + 8);
        piStack_60 = *(int **)(*(int *)(param_1 + 0x18) + iVar3);
        uStack_5c = (uint)uVar5;
        iStack_54 = param_3;
        (**(code **)(*piStack_60 + 0x24))(piStack_60,param_2,&piStack_60,param_4);
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

