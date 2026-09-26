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
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


ulonglong fn_82F48230(int *param_1,uint *param_2,uint param_3,uint *param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uStack_40;
  uint uStack_38;
  uint uStack_34;
  
  if ((param_1[10] & 1U) == 0) {
    if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == (uint *)0x0)))) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      uStack_40 = 0;
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1,&uStack_40);
      if (-1 < (int)uVar1) {
        if (uStack_40 < 0x100000000) {
          *param_4 = (uint)uStack_40;
          if (param_3 < (uint)uStack_40) {
            uVar1 = 0xffffffffc00d36b1;
          }
          else {
            puVar5 = param_2 + 1;
            *param_2 = (uint)*(byte *)((int)param_1 + 0x27) << 0x18 |
                       (uint)*(byte *)((int)param_1 + 0x26) << 0x10 |
                       (uint)*(byte *)((int)param_1 + 0x25) << 8 | (uint)*(byte *)(param_1 + 9);
            iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
            if (iVar2 != 0) {
              *(ushort *)puVar5 =
                   *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8;
              puVar5 = (uint *)((int)param_2 + 6);
            }
            if (*(short *)(param_1 + 6) != 0) {
              uVar4 = 0;
              puVar3 = (ulonglong *)(puVar5 + -2);
              do {
                iVar2 = uVar4 * 8;
                uVar4 = uVar4 + 1 & 0xffff;
                uVar1 = *(ulonglong *)(iVar2 + param_1[0xb]);
                uStack_34 = (uint)uVar1;
                uStack_38 = (uint)(uVar1 >> 0x20);
                puVar3 = puVar3 + 1;
                *puVar3 = ((uVar1 & 0xff) << 0x18 |
                          (uVar1 & 0xff00) << 8 |
                          (ulonglong)(uStack_34 >> 8) & 0xff00 | (ulonglong)(uStack_34 >> 0x18)) <<
                          0x20 | ((ulonglong)uStack_38 & 0xff) << 0x18 |
                                 ((ulonglong)uStack_38 & 0xff00) << 8 |
                                 (ulonglong)(uStack_38 >> 8) & 0xff00 |
                                 (ulonglong)(uStack_38 >> 0x18);
              } while (uVar4 < *(ushort *)(param_1 + 6));
            }
            uVar1 = -(ulonglong)((param_1[10] & 1U) != 0) & 0xffffffff80004001;
          }
        }
        else {
          uVar1 = 0xffffffffc00d3a9a;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff80004001;
  }
  return uVar1;
}

