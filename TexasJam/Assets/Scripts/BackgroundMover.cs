using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundMover : MonoBehaviour
{
    public GameObject l_Background;
    public GameObject r_Background;
    [SerializeField] GameObject l_Spawner;
    [SerializeField] GameObject r_Spawner;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(WallSpawn());
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private IEnumerator WallSpawn()
    {
        var l_Pos = l_Spawner.gameObject.transform.position;
        var l_Rot = l_Spawner.gameObject.transform.rotation;
        var r_Pos = r_Spawner.gameObject.transform.position;
        var r_Rot = r_Spawner.gameObject.transform.rotation;
        yield return new WaitForSeconds(4.25f);
        
        GameObject l_Wall = Instantiate(l_Background, l_Pos, l_Rot);
        GameObject r_Wall = Instantiate(r_Background, r_Pos, r_Rot);
        StartCoroutine(WallSpawn());
    }
}
