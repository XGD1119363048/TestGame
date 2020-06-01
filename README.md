This is a UE4 project related to the balance ball

----------------
5.30更新日志

创建基于HitBoxBase的子类SaveLocation，并增加StaticMesh组件
设置组件父子关系，重写OnHitSphere，在其中更新GameMode中的重生位置

更新DieSphere中的OnHitSphere，获取GameMode并设置玩家位置

更新TestGameGameModeBase，增加更新设置重生位置函数

----------------
5.29更新日志

在游戏模式中添加复活点功能，在玩家出生时获取玩家位置

创建碰撞盒基类HitBoxBase，具有BoxComponent组件，绑定Overlap事件

创建基于碰撞盒基类的死亡碰撞盒子类DieSphere，具有一个三维向量表示重生位置

在绑定的事件函数OnHitSphere中设置玩家位置为出生位置

----------------
5.28更新日志

创建小球基类SpherePawnBase，具有StaticMesh组件、SpringArm组件、Camera组件

增加小球速度SphereSpeed、最大速度SphereMaxSpeed、最小速度SphereMinSpeed属性

绑定玩家前后左右输入wsad

绑定小球加速输入lshift、space

创建TestGameGameModeBase类，增加玩家组件以及重生位置
增加设置玩家位置的函数

